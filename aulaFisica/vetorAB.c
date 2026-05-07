#include<stdio.h>

int vetA[10];
int vetB[10];

void armazenaA(int k);
void armazenaB(int k);
void exiba(int k);
int SomaPardeA(int k);
int SomaImpardeB(int k);

int main() {
    int somaA, somaB, k;
    do {
        printf("Digite a quantidade de números, deve ser <= 10\n");
        scanf("%d", &k);
        if(k<3 || k>10) {
            printf("Quantidade inválida, insira novamente.\n");
        }
    } while (k<3 || k>10);
    printf("O valor de K é %d\n", k);
    armazenaA(k);
    armazenaB(k);
    exiba(k);
    somaA = SomaPardeA(k);
    somaB = SomaImpardeB(k);
    printf("\nA soma dos pares de A é %d, e a soma dos ímpares do vetor B é %d.\n", somaA, somaB);
    return 0;
}

void armazenaA(int k) {
    for(int cont=0; cont<k; cont++) {
        printf("Digite o número na posição %d\n", cont+1);
        scanf("%d", &vetA[cont]);
    }
}
void armazenaB(int k) {
    for(int cont=0; cont<k; cont++) {
        vetB[cont] = vetA[cont]*5;
    }
}

void exiba(int k) {
    printf("vetor A         Vetor B\n");
    for(int cont=0; cont<k; cont++) {
        printf("%d          %d\n", vetA[cont], vetB[cont]);
    }
}

int SomaPardeA(int k) {
    int soma=0; 
    for(int cont=0; cont<k; cont++) {
        if (vetA[cont]%2 == 0) {
            soma += vetA[cont];
        }
    }
    return soma;
}

int SomaImpardeB(int k) {
    int soma=0; 
    for(int cont=0; cont<k; cont++) {
        if (vetB[cont]%2 != 0) {
            soma += vetB[cont];
        }
    }
    return soma;
}