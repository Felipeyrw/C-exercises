#include "prototipoVetor.h" // Sobe para a raiz e entra em headers
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void quinzeElementos() {
    int quinze[15];
    int cont;
    for(cont=0;cont<15;cont++) {
        printf("Digite um número ( Posição = %d )", cont+1);
        scanf("%i", &quinze[cont]);
    }
    printf("EXIBIÇÃO DO VETOR\n");
    for(cont=0;cont<15;cont++) {
        printf("%d \n", quinze[cont]);
    }
}
void maioresQue121() {
    int lista[12];
    int cont;
    for(cont=0;cont<12;cont++) {
        printf("Digite um número ( Posição = %d )", cont+1);
        scanf("%i", &lista[cont]);
    }
    for(cont=0;cont<12;cont++) {
        if(lista[cont] > 121) {
            printf("O número %d é maior que 121 \n", lista[cont]);
        }
    }
}
void vetorBÉ3xA() { 
    int vetorA[8];
    int vetorB[8];
    int cont;
    for(cont=0;cont<8;cont++) {
        printf("Digite um número ( Posição = %d )", cont+1);
        scanf("%i", &vetorA[cont]);
        vetorB[cont] = vetorA[cont]*3;
    }
    printf("Vetor A:\n");
    for(cont=0;cont<8;cont++) {
        printf("%d \n", vetorA[cont]);
    }
    printf("Vetor B:\n");
    for(cont=0;cont<8;cont++) {
        printf("%d \n", vetorB[cont]);
    }
}
void somaVetores() {
    int vetor[6];
    int cont;
    int soma = 0;
    do {
        soma = 0;
        for(cont=0;cont<6;cont++) {
            do {
            printf("Digite um número ( Posição = %d )", cont+1);
            scanf("%i", &vetor[cont]);
            } while (vetor[cont] <= 0);

            soma += vetor[cont]*vetor[cont];
        }
        if (soma < 1000) {
            printf("A soma dos quadrados dos números devem ser maiores que 1000.");
        }
    } while (soma < 1000);
    printf("A soma dos quadrados de cada número é %d", soma);
}

void maiorNumero() {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int cont;
    int maior = vetor[0];
    int vetorCont = 0;
    printf("Exibindo vetores...\n");
    for (cont=0;cont<10;cont++) {
        printf("%d\n", vetor[cont]);
        if(vetor[cont] > maior) {
            maior = vetor[cont];
            vetorCont = 1;
        } else if(vetor[cont] == maior) {
            vetorCont += 1;
        }
    }
    int vetorPosicoes[vetorCont];
    int j = 0;
    for (cont=0;cont<10;cont++) {
        if(vetor[cont] == maior) {
            vetorPosicoes[j] = cont;
            j++;
        }
    }
    printf("O maior número é %d, e apareceu %d vezes \n", maior, vetorCont);
    printf("Ele apareceu nessas posições:\n");
    for (cont=0;cont<vetorCont;cont++) {
        printf("Posição: %d", vetorPosicoes[cont]+1);
    }
}
void vetorBFatorialdeA() {
    int vetorA[15];
    int quantia;
    int cont;
    
    //Verificar a quantidade
    do {
        printf("Quantos números você deseja inserir? ( Máx 15 )\n");
        scanf("%d", &quantia);
    } while (quantia > 15 || quantia < 1);

    //construir um vetor que o usuario digite a quantia desejada de numeros
    for(cont=0;cont<quantia;cont++) {
        printf("Digite o número: ");
        scanf("%d", &vetorA[cont]);
    };
    //vetor B de mesmo tipo, cada elemento B é fatorial do correspondente no vetor A
    int vetorB[cont];
    for(cont=0;cont<quantia;cont++) {
        int fatorial=1;
        int i;
        int indice = vetorA[cont];
        for( i=1; i<=indice; i++ ) {
            fatorial *= i;
        }
        vetorB[cont] = fatorial;
    }
    //Apresentar os valores
    printf("\nVETOR A --- VETOR B\n");
    for(cont=0;cont<quantia;cont++) {
        printf("  %d    ---    %d\n", vetorA[cont], vetorB[cont]);
    }
}

void reversoA() {
    int vetorA[20];
    int quantia;
    int cont;
    
    //O usuário poderá digitar a quantidade de números 
    //que ele deseja armazenar no vetor A 
    //desde que esse valor seja superior a 4 e inferior ou igual a 20. 
    do {
        printf("Quantos números você deseja inserir? ( Máx 20 Min 4 )\n");
        scanf("%d", &quantia);
    } while (quantia > 20 || quantia < 4);

    for(cont=0;cont<quantia;cont++) {
        printf("\nInsira o valor:");
        scanf("%d", &vetorA[cont]);
    }
    //Construa o vetor B da mesma dimensão e com os mesmos elementos do vetor A. 
    //Observando que o primeiro elemento de A passa a ser o último de B, 
    int vetorB[cont];
    int ajudante = quantia-1;
    for(cont=0;cont<quantia;cont++) {
        vetorB[cont] = vetorA[ajudante];
        ajudante--;
    }

    //Exibir o conteúdo dos dois vetores.
    printf("\nVETOR A --- VETOR B\n");
    for(cont=0;cont<quantia;cont++) {
        printf("  %d    ---    %d\n", vetorA[cont], vetorB[cont]);
    }
}
void duniaoABC() {
    //Declarando variáveis

    int cont, numerosNegativos=0, vetorA[5], vetorB[5], vetorC[5], vetorD[15];

    //Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada. 

    for(cont=0;cont<5;cont++) {
        printf("\nInsira o número de posição %d do vetor A: ", cont+1);
        scanf("%d", &vetorA[cont]);
    }
    for(cont=0;cont<5;cont++) {
        printf("\nInsira o número de posição %d do vetor B: ", cont+1);
        scanf("%d", &vetorB[cont]);
    }
    for(cont=0;cont<5;cont++) {
        printf("\nInsira o número de posição %d do vetor C: ", cont+1);
        scanf("%d", &vetorC[cont]);
    }
    //Construa o vetor D, sendo este a junção dos três outros vetores.
    // Armazene no vetor D o primeiro elemento do vetor A depois do B e do C e assim sucessivamente.
    int j = 0;
    for(int i = 0; i < 5; i++) {
        vetorD[j++] = vetorA[i];
        vetorD[j++] = vetorB[i];
        vetorD[j++] = vetorC[i];
    }
    // Apresentar o conteúdo de todos os vetores. 
    //Exiba quantas vezes apareceram números negativos no vetor D.
    printf("\nNúmeros negativos apareceram %d vezes no vetor D\n", numerosNegativos);
    printf("\nVETOR A --- VETOR B --- VETOR C\n");
    for(cont=0;cont<5;cont++) {
        printf("   %d    ---    %d    ---    %d\n", vetorA[cont], vetorB[cont],vetorC[cont]);
    }
    printf("\n VETOR D");
    for(cont=0;cont<15;cont++) {
        printf("\n  %d   ", vetorD[cont]);
    }
}

void vetorBmetadeA() {
    //Leia o vetor A com 10 elementos positivos. 
    int cont, quantiaA, quantiaB;
    float  vetorA[10], vetorB[10];
    for(cont=0;cont<10;cont++) {
        printf("\nInsira o número de posição %d do vetor A: ", cont+1);
        scanf("%f", &vetorA[cont]);
        if (vetorA[cont] > 4.0){
            quantiaA+=1;
        }
    }
    //Construa o vetor B de mesmo tipo, e cada elemento de B deve ser a metade de cada elemento de A. 
    for(cont=0;cont<10;cont++) {
        vetorB[cont] = vetorA[cont]/2.0;
        if (vetorB[cont] > 4.0){
            quantiaB+=1;
        }
    }
    int vetorAposicoes[quantiaA];
    int vetorBposicoes[quantiaB];
    //Exiba em que Vetor e em que posições apareceram valores superiores a 4. 
    for(cont=0;cont<quantiaA;cont++) {
        if (vetorA[cont] > 4) {
            vetorAposicoes[cont] = cont;
        }
    }
    for(cont=0;cont<quantiaB;cont++) {
        if (vetorB[cont] > 4) {
            vetorBposicoes[cont] = cont;
        }
    }
    //Exibir o conteúdo dos dois vetores.
    printf("\nVETOR A");
    for(cont=0;cont<quantiaA;cont++) {
        printf("  %d\n", vetorAposicoes[cont]);
    }
    printf("\nVETOR B");
    for(cont=0;cont<quantiaB;cont++) {
        printf("  %d\n", vetorBposicoes[cont]);
    }
}
void tabuadaA() {
    printf("tabuadaA\n");
}
void temperaturasAno() {
    printf("temperaturasAno\n");
}
void notasAlunos() {
    printf("notasAlunos\n");
}   
void pesosIdentificacoes() {
    printf("pesosIdentificacoes\n");
}  
void vetorBparImpar() {
    printf("vetorBparImpar\n");
}
void somaImparesPosicoes() {
    printf("somaImparesPosicoes\n");
}
void vetorBimparesMultiplicados() {
    printf("vetorBimparesMultiplicados\n");
}
void salariosIdentificacoes() {
    printf("salariosIdentificacoes\n");
}
void vetorCDporIndice() {
    printf("vetorCDporIndice\n");
}
void vetorAparBimpar() {
    printf("vetorAparBimpar\n");
}
void inverterVetorX() {
    printf("inverterVetorX\n");
}
void inverterMultiplosDe5X() {
    printf("inverterMultiplosDe5X\n");
}
