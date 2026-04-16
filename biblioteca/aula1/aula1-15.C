#include <stdio.h>
#include "funcoes-aula.h"

int main()
{
    int opcao;
    do {
        printf("\033[H\033[J");

        printf("\n ---- MENU DE OPERAÇÃO ---- \n");
        printf("1. Calcular o sucessor e antecessor \n");
        printf("2. Valor acrescido em 10%% \n");
        printf("3. Novo preço com desconto de 9%%\n");
        printf("4. Produto inflacionado em 10%% se for menor que 100 e se for maior que 100 será 20%%\n");
        printf("5. Salário liquido de um professor\n");
        printf("6.  Custo Carro Novo \n");
        printf("7.  Positivo/Negativo/Zero\n");
        printf("8.  Media Aluno (v1)\n");
        printf("9.  Salario a Receber\n");
        printf("10. Maior de Dois\n");
        printf("11. Sao Multiplos?\n");
        printf("12. Pares ou Impares?\n");
        printf("13. Maior ou Iguais\n");
        printf("14. Equacao 2o Grau\n");
        printf("15. Salario Professor FATEC\n");
        printf("0.  Sair\n");
        printf("=======================================================\n");
        printf("Escolha o exercicio que deseja executar: ");

        if (scanf("%d", &opcao) == 1) {
            switch (opcao) {
                case 1:
                    case1_sucessor_antecessor();
                    break;
                case 2:case2_acrescer_10(); break;
                case 3:case3_desconto_9(); break;
                case 4:case4_inflacao_produto(); break;
                case 5:case5_salario_liquido_professor(); break;
                case 6:case6_custo_carro_novo(); break;
                case 7:case7_positivo_negativo_zero(); break;
                case 8:case8_media_aluno_v1(); break;
                case 9:case9_salario_receber(); break;
                case 10:case10_maior_dois(); break;
                case 11:case11_sao_multiplos(); break;
                case 12:case12_pares_ou_impares(); break;
                case 13:case13_maior_ou_iguais(); break;
                case 14:case14_equacao_segundo_grau(); break;
                case 15:case15_salario_professor_fatec(); break;
                case 0:printf("\nEncerrando o programa.\n"); break;
                default:printf("\nOpcao invalida! Tente um numero da lista.\n"); break;
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