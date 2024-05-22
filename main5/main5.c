#include <stdlib.h>
#include "matematica.h"


//Crie uma biblioteca chamada matematica.h que contenha funções para calcular a soma, subtração, multiplicação e divisão de dois números. 
//Utilize esta biblioteca em um programa que leia dois vetores de 5 elementos cada e, usando as funções da biblioteca, calcule a soma, 
//subtração, multiplicação e divisão elemento por elemento entre os dois vetores, armazenando os resultados em novos vetores.

int main()
{
    int vet1[taman] = {1,2,3,4,5};
    int vet2[taman] = {6,7,8,9,10};
    Operacoes list_op[taman];

    Soma(list_op, vet1, vet2);
    Subt(list_op, vet1,vet2);
    Mult(list_op,vet1,vet2);
    Div(list_op,vet1,vet2);

    ImprimirVetor(list_op, vet1, vet2);

    return 0;
}