#include "biblioteca.h"

int Fatorial(int num)
{
    int fat = 1;

    for (int i = num; i > 0; i--)
    {
        fat *= i; 
    }

    return fat;
}