#include <stdio.h>

int X[5],k, maiorNum=0, contagemMaior=0, somaNum = 0, contagemCincos = 0;
float media, somaCincos;

void armazenar();
void soma();

int main() {
    armazenar();
    soma();
    return 0;
}

void armazenar() {
    for (k=0;k<5;k++) {
        printf("Insira o numero de posicao %d\n", k+1);
        scanf("%d", &X[k]);
        if (X[k] > maiorNum) {
            maiorNum = X[k];
            contagemMaior = 1;
        } else if (X[k] == maiorNum) {
            contagemMaior++;
        } 
        if (X[k] % 5 == 0) {
            contagemCincos++;
            somaCincos += (float)X[k];
        }
    }
}

void soma() {
    printf("Entrou na soma\n");
    if (contagemCincos == 0) {
        printf("\nNenhum numero multiplo de 5 foi digitado");
    } else {
        media = somaCincos/contagemCincos;
        printf("\nA media dos múltiplos de cincos é %.2f", media);
    }
    for (k=0;k<5;k++) {
        if (X[k] % 2 == 0) {
        somaNum += X[k];
        }
    }
    if (somaNum == 0) {
        printf("\nNão houve numeros pares.");
    } else {
        printf("\nA soma dos numeros pares foi %d", somaNum);
    }
    printf("\nO maior numero e %d, ele apareceu %d vezes\n", maiorNum, contagemMaior);
}