#include <stdio.h>
#include <stdlib.h>

//NIVEL MÉDIO:
//Crie uma struct chamada Aluno que contenha os campos nome, nota1, nota2 e media. Escreva um programa que leia os dados de 3 alunos, 
//calcule a média de cada aluno e imprima o nome e a média daqueles que têm média maior ou igual a 7.0.
#define tamanho 3

typedef struct aluno
{
    char nome[50];
    double nota1, nota2, media;
}Aluno;

void Media(Aluno alunos[])
{
    for (int i = 0; i < tamanho; i++)
    {
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;      
    }      
}


void AddAluno(Aluno aluno[])
{
    printf("Qual o nome do infeliz?\n");
    scanf("%s", &aluno->nome);
    printf("Primeira nota:\n");
    scanf("%lf", &aluno->nota1);

    printf("Segunda nota:\n");
    scanf("%lf", &aluno->nota2);
}

void AddTodosAlunos(Aluno alunos[])
{
    for (int i = 0; i < tamanho; i++)
    {
    printf("Qual o nome do infeliz?\n");
    scanf("%s", &alunos[i].nome);
    printf("Primeira nota:\n");
    scanf("%lf", &alunos[i].nota1);

    printf("Segunda nota:\n");
    scanf("%lf", &alunos[i].nota2);        
    }    
}

void ImprimirLista(Aluno alunos[])
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n");
        printf("O %d infeliz se chama: %s\n", i+1, alunos[i].nome);
        printf("Sua primeira nota eh: %.2lf\n", alunos[i].nota1);
        printf("Sua segunda nota eh: %.2lf\n", alunos[i].nota2);
        printf("Obteve media igual a %.2lf\n", alunos[i].media);
        printf("Situacao:\n");
        if (alunos[i].media >= 7.0)
        {
           printf("Aprovado\n");
        }
        else
        {
            printf("Reprovado\n");
        }
    }
}

int main()
{
    struct aluno nome[] = {""};
    struct aluno nota1 = {0};
    struct aluno nota2 = {0};
    struct aluno media = {0};

    Aluno lista_alunos[tamanho];
    AddTodosAlunos(lista_alunos);
    Media(lista_alunos);
    ImprimirLista(lista_alunos);

    
    

    return 0;
}