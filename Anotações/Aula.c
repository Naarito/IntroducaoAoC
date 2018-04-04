//---- Imprimir
printf("Algo %d, e outra coisa %D", variavel, outravariavel);


//---- Capturar
scanf("%d", nomevariavel);


//---- Variáveis
//Inteiras
short
%d
2 Bytes ou 16 Bits = 2^16 valores

int
%d
4 Bytes ou 32 Bits = 2^32 valores

long
%d
8 Bytes ou 64 Bits = 2^64 valores

//Decimais
float
%f //Com todas as casas decimais
%.1f //Apenas com a primeira casa decimal
4 Bytes ou 32 Bits = 2^32 valores

double
%f
%.2f
8 Bytes ou 64 Bits = 2^64 valores
//------------------------------------
//P/ funcionar bem com contas, é necessário
//que um dos termos também seja double, mesmo
//que seja uma constante.
//------------------------------------
//é possível também utilizar casting, quando não
//há constantes para serem alteradas, para isto basta
//fazer a/(double)b ou (double)a/b, e o resultado da conta
//será dado em ponto flutuante ao invés de inteiro.
//------------------------------------
//Também conseguimos converter dadods double pra inteiro
//fazendo o seguinte casting: int a = (int)b.
//Porém é melhor não fazer em casos de cating de dados
//com mais info para menos info.
//------------------------------------


//---- Gerando Valores Aleatórios
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();

    int numeroAleatorio = (numeroGrande)%100; //Divisor com resto 
    //Dá um numero entre 1 e 99
}
//------------------------------------
//Podemos definir a quantidade de números com base
//no divisor da função rand, ex.: %150 nos dá 149 valores
//------------------------------------

//---- O módulo de um valor

abs(x) //dá o valor INTEIRO e positivo de X
fabsf(x) //dá o valor COM VIRGULA, float e positivo de X
fabs(x) //dá o valor COM VIRGULA, double e positivo de X

//---- Operações
//For
for(int i = 1; i>=3; i++){
    //For de 1 até 3
    continue; //Pula para a próxima iteração do for
}

//If
if(primeiro verdadeiro ou falso){
    //Executar se primeiro verdadeiro
}
else if(segundo verdadeiro ou falso){
    //Executar se segundo verdadeiro
    break; //Termina o loop, caso esteja contido em um
}
else{
    //Executar se tudo falhar
}

//Switch
switch (dificuldade)
    {
    case 1:
        //faz algo no caso 1
        break;
    case 2:
        //faz algo no caso 2
        break;
    default:
        //faz algo em qualquer outro valor
        break;
    }