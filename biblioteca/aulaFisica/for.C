#include <stdio.h>
int main() 
{
    int cont, A[5];
    for (cont=0;cont<5;cont++)
    {
        printf("Digite um número na posição %i: \n", cont);
        scanf("%i", &A[cont]);
    }
    printf("EXIBIÇÃO DO VETOR A \n");
    for(cont=0;cont<5;cont++) {
        printf("%d \n", A[cont]);
    }
    return 0;
}