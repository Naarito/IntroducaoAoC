#include <stdio.h>

int main()
{
    int numeroSecreto;
    int chute;
    int ganhou;
    int tentativa;

    //Cabeçalho
    printf("\n");
    printf("#######################\n");
    printf("#                     #\n");
    printf("# Bem vindo ao Guess! #\n");
    printf("#                     #\n");
    printf("#######################\n");
    printf("\n");

    numeroSecreto = 42;
    tentativa = 1;

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
            printf("O numero eh maior!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");
        }
        else
        {
            printf("O numero eh menor!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");
        }

        tentativa++;
    }
    printf("Fim de jogo!\n");
    printf("\n");
    printf("Numero de tentativas: %d\n", tentativa);
    printf("\n");
}
