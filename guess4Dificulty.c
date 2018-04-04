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
    int dificuldade;
    int qtdtentativas;
    int acertou;

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;

    printf("\n");
    printf(" _____                       _____                      \n");
    printf("|  __ \\                     |  __ \\                     \n");
    printf("| |  \\/_   _  ___  ___ ___  | |  \\/ __ _ _ __ ___   ___ \n");
    printf("| | __| | | |/ _ \\/ __/ __| | | __ / _` | '_ ` _ \\ / _ \\ \n");
    printf("| |_\\ \\ |_| |  __/\\__ \\__ \\ | |_\\ \\ (_| | | | | | |  __/\n");
    printf(" \\____/\\__,_|\\___||___/___/  \\____/\\__,_|_| |_| |_|\\___|\n");
    printf("\n");

    tentativa = 1;
    pontos = 1000;
    pontosperdidos = 0;

    printf("Dificuldades:\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Qual dificuldade voce gostaria de jogar?");
    scanf("%d", &dificuldade); //faz a leitura de uma entrada
    printf("\n");

    switch (dificuldade)
    {
    case 1:
        qtdtentativas = 20;
        break;
    case 2:
        qtdtentativas = 10;
        break;
    default:
        qtdtentativas = 5;
        break;
    }

    for (int i = 1; i <= qtdtentativas; i++)
    {
        printf("Tentativa %d de %d\n", i, qtdtentativas);
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

        acertou = (chute == numeroSecreto); //passa 0 ou 1
        int chuteAcima = (chute > numeroSecreto);

        if (acertou)
        {
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

    if (acertou){
        printf("Parabens, voce acertou!\n");
        printf("        :D\n");
        printf("\n");
        printf("#########################\n");
        printf("\n");
        printf("Numero de tentativas: %d\n", tentativa);
        printf("Numero de pontos: %.1f\n", pontos);
        printf("\n");
        printf("#########################\n");
        printf("\n");
    }
    else{
        printf("Voce perdeu, tente de novo!\n");
        printf("\n");
        printf("          :(\n");
        printf("\n");
    }
    printf("Feche a janela para sair");
    scanf("%d", sair);
}
