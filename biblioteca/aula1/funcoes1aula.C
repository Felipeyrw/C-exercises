#include "funcoes-aula.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int verificarNota(int numero);

void case1_sucessor_antecessor(void)
{
    int num;
    float f, s;

    printf("insira um número ");
    scanf("%d", &num);
    f = num + 1;
    s = num - 1;
    printf("O sucessor deste número é %.0f, e o antecessor é %.0f", f, s);
}

void case2_acrescer_10(void)
{
    int num;
    float f;

    printf("\nInsira um número");
    scanf("%d", &num);
    f = num * 1.1f;
    printf("\nEsse número acrescido de 10%% é %.2f", f);
}

void case3_desconto_9(void)
{
    float n, f, s;

    printf("\nInsira um número\n");
    scanf("%f", &n);
    f = n * 0.09f;
    s = n - f;
    printf("Com o desconto de 9%%, o valor sai de %.2f, para %.2f", n, s);
}

void case4_inflacao_produto(void)
{
    int num;
    float f;

    do {
        printf("\n Insira o preço do produto \n");
        scanf("%d", &num);
    } while (num < 0);

    if (num > 0 && num < 100) {
        f = num * 1.1f;
        printf("O produto inflacionado custa R$%.2f", f);
    } else if (num >= 100) {
        f = num * 1.2f;
        printf("O produto inflacionado custa R$%.2f", f);
    } else {
        printf("Numero inválido");
    }
}

void case5_salario_liquido_professor(void)
{
    int hra;
    int desconto;
    int num;
    float f, s;

    do {
        printf("\n Informe o valor recebido por hora\n");
        scanf("%d", &hra);
    } while (hra <= 0);
    do {
        printf("\n Informe as horas trabalhadas \n");
        scanf("%d", &num);
    } while (num < 0);
    do {
        printf("\n Informe o desconto em porcentagem do inss\n");
        scanf("%d", &desconto);
    } while (desconto < 0);

    f = hra * num;
    s = f - (f * desconto / 100);
    printf("\nO salário líquido é %.0f\n", s);
}

void case6_custo_carro_novo(void)
{
    float f;
    float s;
    float i;
    float lucro;
    float impostos;
    float total;

    do {
        printf("\nInforme o preço de fábrica do carro\n");
        scanf("%f", &f);
    } while (f < 0);
    do {
        printf("\nInforme o percentual de lucro do distribuidor\n");
        scanf("%f", &s);
    } while (s < 0);
    do {
        printf("\n Informe o percentual de impostos\n");
        scanf("%f", &i);
    } while (i < 0);

    lucro = f * (s / 100);
    impostos = f * (i / 100);
    total = lucro + f + impostos;

    printf("\n O lucro foi %.2f\n", lucro);
    printf("\n Os impostos foram %.2f\n", impostos);
    printf("\nO preço total foi de %.2f\n", total);
}

void case7_positivo_negativo_zero(void)
{
    char mensagem[20] = "";
    int numero;

    printf("\n Insira o número \n");
    scanf("%d", &numero);
    if (numero > 0) {
        strcpy(mensagem, "Positivo");
    } else if (numero == 0) {
        strcpy(mensagem, "Zero");
    } else if (numero < 0) {
        strcpy(mensagem, "Negativo");
    } else {
        printf("Isso não é um número");
    }
    printf("\nO número é %s\n", mensagem);
}

void case8_media_aluno_v1(void)
{
    int notas[4];
    int elementosArray;
    int totalA = 0;
    float media;
    bool aprovado;

    elementosArray = sizeof(notas) / sizeof(notas[0]);
    printf("A nota deve ser maior que zero e menor que 10");
    for (int i = 0; i < elementosArray; i++) {
        notas[i] = verificarNota(i);
        totalA += notas[i];
    }

    media = (float) totalA / elementosArray;
    aprovado = media >= 6;
    if (aprovado) {
        printf("\nVocê foi aprovado!");
    } else {
        printf("\nVocê foi reprovado...");
    }
}

void case9_salario_receber(void)
{
    const int salarioMinimo = 1621;
    int horasTrabalhadas;
    float valorHora;
    float salarioBruto;

    do {
        printf("\nInsira as horas trabalhadas\n");
        scanf("%d", &horasTrabalhadas);
    } while (horasTrabalhadas < 0);

    valorHora = salarioMinimo / 12.0f;
    salarioBruto = (valorHora * horasTrabalhadas) * 0.97f;
    printf("\nO salário bruto é %.2f\n", salarioBruto);
}

void case10_maior_dois(void)
{
    int a;
    int b;

    printf("\nInsira dois números inteiros\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        printf("O maior valor é %d", a);
    } else {
        printf("O maior valor é %d", b);
    }
}

void case11_sao_multiplos(void)
{
    int a;
    int b;
    bool multiplos;

    printf("\nInsira o primeiro número\n");
    scanf("%d", &a);
    printf("\nInsira o segundo número\n");
    scanf("%d", &b);

    multiplos = a % b == 0;
    if (multiplos) {
        printf("Eles são múltiplos");
    } else {
        printf("Eles não são múltiplos");
    }
}

void case12_pares_ou_impares(void)
{
    int a;
    int b;

    printf("\nInsira dois números\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % 2 == 0 && b % 2 == 0) {
        printf("\nSão pares");
    } else if (a % 2 == 1 && b % 2 == 1) {
        printf("\nSão ímpares");
    } else {
        printf("\nUm é par e o outro é ímpar");
    }
}

void case13_maior_ou_iguais(void)
{
    int a;
    int b;

    printf("\nInsira dois números\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a == b) {
        printf("São iguais");
    } else if (b > a) {
        printf("O segundo é maior que o primeiro.");
    } else {
        printf("O primeiro é maior que o segundo");
    }
}

void case14_equacao_segundo_grau(void)
{
    float delta;
    float x1;
    float x2;
    float a;
    float b;
    float c;

    printf("\n Calculando as raízes de uma equação do 2 grau! Insira A \n");
    scanf("%f", &a);

    if (a == 0) {
        printf("\nA tem que ser diferente de zero\n");
    } else {
        printf("\n Insira o valor de B\n");
        scanf("%f", &b);
        printf("\nInsira o valor de C\n");
        scanf("%f", &c);
        delta = b * b - 4 * a * c;
        if (delta >= 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("As raízes são {%.2f, %.2f}", x1, x2);
        } else {
            printf("Operaçao inválida: delta é menor que zero");
        }
    }
}

void case15_salario_professor_fatec(void)
{
    int a;
    float s;
    float f = 0;

    do {
        printf("Qual o nível do professor? ( Só pode 1, 2 e 3 )\n");
        scanf("%d", &a);
    } while (a < 1 || a > 3);
    do {
        printf("Insira as horas trabalhadas.\n");
        scanf("%f", &s);
    } while (s < 0);
    if (a == 1) {
        f = s * 55;
    } else if (a == 2) {
        f = s * 67;
    } else if (a == 3) {
        f = s * 78;
    }
    printf("\nO salário desse professor é %0.2f", f);
}

int verificarNota(int i)
{
    int numero;
    do {
        printf("\nDigite %d° a nota", i + 1);
        scanf("%d", &numero);
    } while (numero < 0 || numero > 10);
    return numero;
}