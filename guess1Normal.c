#include <stdio.h>

#define TENTATIVAS 5

int main()
{
    int numeroSecreto;
    int chute;

    //Cabeçalho
    printf("\n");
    printf("#######################\n");
    printf("#                     #\n");
    printf("# Bem vindo ao Guess! #\n");
    printf("#                     #\n");
    printf("#######################\n");
    printf("\n");

    numeroSecreto = 42;

    for (int i = 1; i <= TENTATIVAS; i++) //loop executado n vezes
    {
        printf("Tentativa %d de %d \n", i, TENTATIVAS);
        printf("Qual eh seu chute? ");
        scanf("%d", &chute); //faz a leitura de uma entrada
        printf("\n");

        if(chute<0){
            printf("Você não pode chutar numeros negativos!\n");
            printf("\n");
            printf("------------------------\n");
            printf("\n");
            i--;

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
    }
    printf("Fim de jogo!\n");
    printf("\n");
}
