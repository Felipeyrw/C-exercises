#include "prototipoVetor.h"
#include <stdio.h>

int main(void)
{
    int opcao;
    do {
        printf("\033[H\033[J");
        printf("\nMenu de exercicios:\n");
        printf("1  - Mostrar 15 elementos\n");
        printf("2  - Mostrar maiores que 121 no vetor\n");
        printf("3  - Vetor B é A vezes 3\n");
        printf("4  - Se a soma < 1000, solicite mais.\n");
        printf("5  - Mostrar qual, quantas vezes, e posição do maior número de 10\n");
        printf("6  - Vetor B fatorial de A\n");
        printf("7  - Vetor B reverso de A\n");
        printf("8  - Vetor D união de A, B e C\n");
        printf("9  - Vetor B metade de A\n");
        printf("10 - Tabuada em vetor A\n");
        printf("11 - Temperaturas do ano\n");
        printf("12 - Notas de dez alunos\n");
        printf("13 - Pesos e identificações\n");
        printf("14 - Vetor B com regra par/ímpar\n");
        printf("15 - Soma ímpares e posições\n");
        printf("16 - Vetor B com ímpares multiplicados\n");
        printf("17 - Salários e identificações\n");
        printf("18 - Vetores C e D por índice\n");
        printf("19 - Vetores A pares e B ímpares e C união\n");
        printf("20 - Inverter vetor X\n");
        printf("21 - Inverter múltiplos de 5 de X\n");
        printf("0  - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) == 1) {
            switch (opcao) {
                case 1: quinzeElementos(); break;
                case 2: maioresQue121(); break;
                case 3: vetorBÉ3xA(); break;
                case 4: somaVetores(); break;
                case 5: maiorNumero(); break;
                case 6: vetorBFatorialdeA(); break;
                case 7: reversoA(); break;
                case 8: duniaoABC(); break;
                case 9: vetorBmetadeA(); break;
                case 10: tabuadaA(); break;
                case 11: temperaturasAno(); break;
                case 12: notasAlunos(); break;
                case 13: pesosIdentificacoes(); break;
                case 14: vetorBparImpar(); break;
                case 15: somaImparesPosicoes(); break;
                case 16: vetorBimparesMultiplicados(); break;
                case 17: salariosIdentificacoes(); break;
                case 18: vetorCDporIndice(); break;
                case 19: vetorAparBimpar(); break;
                case 20: inverterVetorX(); break;
                case 21: inverterMultiplosDe5X(); break;
                case 0: printf("Saindo...\n"); break;
                default: printf("Opcao invalida. Tente novamente.\n"); break;
            }
            if (opcao != 0) {
                printf("\nPressione Enter para voltar ao menu...");
                getchar();
                getchar();
            }
        } else {
            printf("A opcao deve ser um numero!\n");
            while (getchar() != '\n');
        }
    } while (opcao != 0);

    return 0;
}
