#include <stdio.h>
#include <stdlib.h>

#define tamanho 5
//Crie um programa que leia 5 números inteiros do usuário, armazene-os em um vetor e, em seguida, use uma estrutura condicional para verificar quais números são pares e imprima-os.

int main()
{
    int vet[tamanho] = {0,0,0,0,0};
    int par[tamanho] = {0,0,0,0,0};
    int impar[tamanho] = {0,0,0,0,0};
    int j = 0;

    for (int i = 0; i < tamanho; i++ , j++)
    {
        printf("Escreva um numero:\n");
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0)
        {
            par[j] = vet[i];
            
        }
        else 
        {
            impar[j] = vet[i];
            
        }

    }

    printf("Numeros Pares: ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", par[i]);
    }

    printf("Numeros Impares: ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", impar[i]);
    }
    
    return 0;
}