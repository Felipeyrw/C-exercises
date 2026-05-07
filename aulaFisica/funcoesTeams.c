#include <stdio.h>

void armazenar();
int mostrar();
int X[12];

int main() {
    int maiorNumero;
    armazenar();
    maiorNumero = mostrar();
    printf("O maior número encontrado foi %d", maiorNumero);
}


void armazenar() {
    int k;
    for (k=0;k<12;k++) {
        printf("Insira o numero de posicao %d\n", k+1);
        scanf("%d", &X[k]);
    }
}

int mostrar() {
    int k, maiorNum = 0;
    for (k=0;k<12;k++) {
        if(X[k] > 121) {
            printf("O número na posição %d ( %d ) é maior que 121\n", k+1, X[k]);
        }
        if(X[k] > maiorNum) {
            maiorNum = X[k];
        }
    }
    return maiorNum;
}