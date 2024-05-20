#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tamanho 10
//Defina uma macro chamada SQUARE(x) que retorne o quadrado de x. Utilize essa macro dentro de um loop for para imprimir os quadrados dos números de 1 a 10.

int SQUARE(int x)
{
    int quadrado = pow(x,2);
    return quadrado;
}

int main()
{
    int vet[tamanho] = {1,2,3,4,5,6,7,8,9,10};

    printf("O vetor inicial: ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    printf("Seus quadrados: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d " ,SQUARE(vet[i]));
    }
    
    return 0;
}