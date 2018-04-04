#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int chute;
    int ganhou;
    int tentativa;
    double pontos;
    double pontosperdidos;
    int sair;

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;

    printf("\n");
    printf("#######################\n");
    printf("#                     #\n");
    printf("# Bem vindo ao Guess! #\n");
    printf("#                     #\n");
    printf("#######################\n");
    printf("\n");

    tentativa = 1;
    pontos = 1000;
    pontosperdidos = 0;

    while (1)
    {
        printf("Qual eh seu chute? ");
        scanf("%d", &chute); //faz a leitura de uma entrada
        printf("\n");

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");

            continue;
        }

        printf("Seu chute foi: %d", chute);
        printf("\n");

        int acertou = (chute == numeroSecreto); //passa 0 ou 1
        int chuteAcima = (chute > numeroSecreto);

        if (acertou)
        { //Compara
            printf("Parabens, voce acertou!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");

            break;
        }
        else if (chuteAcima)
        {
            printf("O numero secreto eh menor!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");
        }
        else
        {
            printf("O numero secreto eh maior!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");
        }

        tentativa++;
        pontosperdidos = fabs((double)(chute - numeroSecreto) / 2);
        pontos = pontos - pontosperdidos;
    }
    printf("Fim de jogo!\n");
    printf("\n");
    printf("Numero de tentativas: %d\n", tentativa);
    printf("Numero de pontos: %.1f\n", pontos);
    printf("\n");

    printf("Feche a janela para sair");
    scanf("%d",sair);
}
