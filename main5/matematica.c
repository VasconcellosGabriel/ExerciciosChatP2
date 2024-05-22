#include "matematica.h"

void Soma(Operacoes op[], int *vet1, int *vet2)
{
    for (int i = 0; i < taman; i++)
    {
        op[i].soma = (double)vet1[i] + (double)vet2[i];
    }
}

void Subt(Operacoes op[], int *vet1, int *vet2)
{
    for (int i = 0; i < taman; i++)
    {
        op[i].subt = (double)vet1[i] - (double)vet2[i];
    }
}

void Mult(Operacoes op[], int *vet1, int *vet2)
{
    for (int i = 0; i < taman; i++)
    {
        op[i].mult = (double)vet1[i] * (double)vet2[i];
    }
}

void Div(Operacoes op[], int *vet1, int *vet2)
{
    for (int i = 0; i < taman; i++)
    {
        op[i].div = (double)vet1[i] / (double)vet2[i];
    }
}

void ImprimirVetor(Operacoes *op, int *vet1, int *vet2)
{
    printf("\n");
    printf("Primeiro vetor: {");
    for (int i = 0; i < taman; i++)
    {
        if (i+1 == taman)
        {
            printf("%d}", vet1[i]);
        }
        else {printf("%d, ", vet1[i]);}
    }
    printf("\n");

    printf("Segundo vetor: {");
    for (int i = 0; i < taman; i++)
    {
        if (i+1 == taman)
        {
            printf("%d", vet2[i]);
        }
        else {printf("%d, ", vet2[i]);}
    }
    printf("}");

    printf("\n\n");

    printf("Operacoes entre os vetores:\n");
    printf("Soma: {");
    for (int i = 0; i < taman; i++)
    {
        if (i+1 == taman)
        {
            printf("%.2lf", op[i].soma);
        }
        else {printf("%.2lf, ", op[i].soma);}
    }
    printf("}");
    printf("\n");
    printf("Subtracao: {");
    for (int i = 0; i < taman; i++)
    {
        if (i+1 == taman)
        {
            printf("%.2lf", op[i].subt);
        }
        else {printf("%.2lf, ", op[i].subt);}
        
    }
    printf("}");
    printf("\n");

    printf("Multiplicacao: {");
    for (int i = 0; i < taman; i++)
    {
        if (i+1 == taman)
        {
            printf("%.2lf", op[i].mult);
        }
        else {printf("%.2lf, ", op[i].mult);}
    }
    printf("}");
    printf("\n");
    printf("Divisao: {");
    for (int i = 0; i < taman; i++)
    {
        if (i+1 == taman)
        {
            printf("%.3lf", op[i].div);
        }
        else {printf("%.3lf, ", op[i].div);}
    }
    printf("}");

}