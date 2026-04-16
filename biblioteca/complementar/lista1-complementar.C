#include "funcoes.h"
#include <stdio.h>

int main() 
{
    int opcao;
    do {
	   	printf("\033[H\033[J");
        printf("\nMenu de exercicios:\n");
        printf("1 - Par e divisivel por 5 e 3\n");
        printf("2 - Calcular y conforme o valor de x\n");
        printf("3 - Dividir premio entre tres ganhadores\n");
        printf("4 - Calcular pagamento do encanador\n");
        printf("5 - Calcular folha de pagamento\n");
        printf("6 - Calcular preco do combustivel com desconto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) == 1) {
        switch (opcao) {
            case 1: verifica_par_divisivel(); break;
            case 2: calcula_y_conforme_x(); break;
            case 3: divide_premio(); break;
            case 4: calcula_pagamento_encanador(); break;
            case 5: calcula_folha_pagamento(); break;
            case 6: calcula_preco_combustivel(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida. Tente novamente.\n"); break;
        }
        if (opcao != 0) {
            printf("\nPressione Enter para voltar ao menu...");
            getchar();
            getchar();
        }
    } else {
            printf("A opção deve ser um número!");
            while (getchar() != '\n');
        }
    } while (opcao != 0);
    
    return 0;
}
