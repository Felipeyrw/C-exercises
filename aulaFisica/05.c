#include<stdio.h>

void armazena(int k);
int Soma(int k);

int vet[10];

int main() {
    int soma, k;
    do {
        printf("Digite a quantidade de números, deve ser <= 10\n");
        scanf("%d", &k);
        if(k<=0 || k>10) {
            printf("Quantidade inválida, insira novamente.\n");
        }
    } while (k<=0 || k>10);
    printf("O valor de K é %d\n", k);
    armazena(k);
    soma = Soma(k);
    printf("A soma é %d", soma);
    return 0;
}

void armazena(int k) {
    for(int cont=0; cont<k; cont++) {
        printf("Digite o número na posição %d\n", cont+1);
        scanf("%d", &vet[cont]);
    }
}

int Soma(int k) {
    int soma=0;
    for(int cont=0; cont<k; cont++) {
        soma += vet[cont];
    }
    return soma;
}