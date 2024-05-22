#include <stdio.h>
#include <math.h>

#define taman 5
typedef struct 
{
    double soma, subt, mult, div;
}Operacoes;

void Soma(Operacoes op[], int *vet1, int *vet2);
void Subt(Operacoes op[], int *vet1, int *vet2);
void Mult(Operacoes op[], int *vet1, int *vet2);
void Div(Operacoes op[], int *vet1, int *vet2);

void ImprimirVetor(Operacoes *op, int *vet1, int *vet2);
