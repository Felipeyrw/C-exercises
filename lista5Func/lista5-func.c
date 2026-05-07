#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int opcao;
    do {
        // Limpa a tela (Funciona em Windows e Linux/macOS)
        printf("\033[H\033[J");
        
        printf("========================================\n");
        printf("       MENU DE EXERCICIOS - FUNCOES     \n");
        printf("========================================\n");
        
        printf("\n--- EXERCICIOS ---\n");
        printf("1  - Calcular Volume da Esfera\n");
        printf("2  - Verificar se Positivo/Negativo/Zero\n");
        printf("3  - Divisão de dois números\n");
        printf("4  - Reajuste Salarial (15%%, 10%%, 5%%)\n");
        printf("5  - Verificar Par ou Ímpar\n");
        printf("6  - Reajuste Salarial de K funcionários\n");
        printf("7 - Média da Sequência de Fibonacci\n");
        printf("8 - Calcular Raízes (Equação 2º Grau)\n");
        printf("9 - Calcular Fatorial\n");
        printf("10 - Verificar Tipo de Triângulo\n");
        printf("11 - Categoria de Idade (Vetor Idades)\n");
        printf("12 - Médias (Aritmética, Ponderada, Harmônica)\n");
        printf("13 - Tabuada de 1 até N\n");
        printf("14 - Conceito do Aluno (A, B, C, D)\n");
        printf("15 - Peso Ideal (Masculino/Feminino)\n");
        printf("16 - Junção de Vetores (A, B, C -> D)\n");
        
        printf("0  - Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) == 1) {
            switch (opcao) {
                case 1:  
                float raio, resultado;
                printf("Insira o valor do raio da esfera.");
                scanf("%f", &raio);

                resultado = Esfera(raio);
                printf("O volume da esfera é %f", resultado); break;
                case 2:  
                int valor;

                printf("Insira o valor inteiro.");
                scanf("%d", &valor);

                Verifica(valor); 
                break;
                case 3:  

                int valor1, valor2, result2;

                printf("Insira o numerador inteiro.");
                scanf("%d", &valor1);

                do {
                    printf("Insira o denominador inteiro.");
                    scanf("%d", &valor2);
                    if(valor2> valor1) {
                        printf("Insira um valor válido para divisão igual ou acima de 1.");
                    }
                } while (valor2>valor1);

                result2 = Divisão(valor1, valor2);
                printf("O resultado da divisão é %d", result2); 
                break;
                case 4:  reajuste_salarial_simples(); break;
                case 5:  verifica_par_impar(); break;
                case 6:  reajuste_salarial_k_funcionarios(); break;
                case 7: media_fibonacci(); break;
                case 8: calcula_delta_raizes(); break;
                case 9: calcula_fatorial(); break;
                case 10: tipo_triangulo(); break;
                case 11: categoria_idade_vetor(); break;
                case 12: calcula_media_escolha(); break;
                case 13: tabuada_n(); break;
                case 14: conceito_aluno_multiplo(); break;
                case 15: peso_ideal(); break;
                case 16: juncao_vetores_maior(); break;
                case 0:  printf("Saindo...\n"); break;
                default: printf("Opção inválida!\n"); break;
            }
            
        if (opcao != 0) {
            printf("\nPressione Enter para voltar ao menu...");
            // Limpa o buffer completamente
            int c;
            while ((c = getchar()) != '\n' && c != EOF); 
            // Agora sim, espera o Enter do usuário
            getchar(); 
        }

        } else {
            printf("Erro: Digite um número válido!\n");
            while (getchar() != '\n'); // Limpa buffer de entrada
        }
    } while (opcao != 0);

    return 0;
}