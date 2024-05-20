#include <stdio.h>
#include <stdlib.h>

#define tamanho 5
//Escreva uma função inverte_vetor que receba um vetor de inteiros e seu tamanho, e inverta a ordem dos elementos do vetor. Utilize ponteiros para acessar os elementos do vetor.

void inverte_vetor(int * vet)
{
    int temp[tamanho] = {0,0,0,0,0};
    int cont = tamanho; 
    
     for (int i = 0; i <= tamanho; i++, cont--)
    {
        temp[i-1] = vet[cont];
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        vet[i] = temp[i];
    }
    
}

int main()
{
    int vet[tamanho] = {1,2,3,4,5};
    
    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }

    inverte_vetor(vet);

    printf("\n");

    printf("Vetor invertido: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;
}