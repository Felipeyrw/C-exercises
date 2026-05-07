#include "funcoes.h" // Sobe para a raiz e entra em headers
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void verifica_par_divisivel() {
    int numero;
    printf("Digite um número inteiro\n");
    scanf("%d", &numero);
    if (numero%2 == 0 && numero % 5 == 0 && numero % 3 == 0) {
        printf("O número é par e divisível por 5 e 3.\n");
    } else {
        printf("O número não atende aos critérios.\n");
    }
}
void calcula_y_conforme_x() {
    int x;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    int y;
    if (x < 1) {
        y = x;
    } else if (x == 1) {
        y = 0;
    } else {
        y = x*x;
    }
    printf("O valor de y é: %d\n", y);
}

void divide_premio() {
    float premio = 780000.00;
    float primeiro = premio*0.46;
    float segundo = premio*0.32;
    float terceiro = premio*0.22;
    printf("O primeiro recebeu R$ %0.2f, o segundo R$ %0.2f, o terceiro: R$ %0.2f", primeiro, segundo, terceiro);
}

void calcula_pagamento_encanador() {
    float diaria = 530;
    float dias;
    float salario;
    do {
    printf("Insira o número de dias trabalhados.");
    scanf("%f", &dias);
    } while (fmod(dias, 1.0) != 0);
    salario = dias*diaria;
    salario -= salario*0.08;
    printf("O salário é %0.2f", salario);
}

void calcula_folha_pagamento() {
    printf("cálculo");
}

void calcula_preco_combustivel() {
    printf("Combus");
}