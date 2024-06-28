#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Implemente uma lista simplesmente encadeada que armazene strings.
// Crie funções para inserir um elemento no final da lista, buscar um elemento na lista e remover um elemento da lista.
#define tamanho 25
typedef struct no
{
    char info[tamanho];
    struct no *prox;
} No;

typedef struct lista
{
    No *primeiro;
    No *marcador;
    No *ultimo;
    int contador;
} Lista;

No *CriaNo(char *s)
{
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->info = s;
    novoNo->prox = NULL;
    return novoNo;
}

Lista criaLista()
{
    Lista novaLista = {NULL, NULL, NULL, 0};
    return novaLista;
}

void addno_naLista(No *no, Lista *lst)
{
    if (lst->contador == 0)
    {
        lst->primeiro = no;
    }
    else
    {
        lst->ultimo->prox = no;
    }
    lst->ultimo = no;
    lst->marcador = no;
    l
    st->contador++;
}

void ImprimirLista(Lista list)
{
    list.marcador = list.primeiro;

    while (list.marcador != NULL)
    {
        printf(list.marcador->info);
        list.marcador = list.marcador->prox;
        printf("*******************************\n");
    }
}
void ExcluiPrimeiro(Lista *lst)
{
    lst->marcador = lst->primeiro;
    lst->primeiro = lst->primeiro->prox;
    free(lst->marcador);
    lst->marcador = lst->primeiro;
    lst->contador--;
}

int main()
{
    char vet[tamanho] = "Foda-se";
    Lista strings = criaLista();
    No *novoNo = CriaNo(vet);
    addno_naLista(novoNo, &strings);

        return 0;
}

// NÃO CONSEGUI ;_;, FOI O CHAT
// Crie uma struct chamada Livro com os campos titulo, autor e ano. Implemente um programa que permita
// ao usuário adicionar novos livros a uma lista (vetor), buscar um livro pelo título e listar todos os livros cadastrados.
//  #define tamanho 3

// typedef struct livro {
//     char titulo[100];
//     char autor[100];
//     int ano;
// } Livro;

// void AdicionarLivro(Livro *vet, int *contador) {
//     if (*contador < tamanho) {
//         printf("Digite o titulo do livro: ");
//         scanf(" %[^\n]", vet[*contador].titulo); // Lê até o caractere de nova linha

//         printf("Digite o autor do livro: ");
//         scanf(" %[^\n]", vet[*contador].autor); // Lê até o caractere de nova linha

//         printf("Digite o ano do livro: ");
//         scanf("%d", &vet[*contador].ano);

//         (*contador)++;
//     } else {
//         printf("Lista de livros cheia!\n");
//     }
// }

// void ImprimirLista(Livro *vet, int contador) {
//     for (int i = 0; i < contador; i++) {
//         printf("Titulo: %s\n", vet[i].titulo);
//         printf("Autor: %s\n", vet[i].autor);
//         printf("Ano: %d\n\n", vet[i].ano);
//         printf("*****************************\n");
//     }
// }

// void BuscarLivro(Livro *vet, int contador) {
//     char tituloBusca[100];
//     printf("Digite o titulo do livro que deseja buscar: ");
//     scanf(" %[^\n]", tituloBusca);
//     printf("\n");

//     for (int i = 0; i < contador; i++) {
//         if (strcmp(vet[i].titulo, tituloBusca) == 0) {
//             printf("Livro encontrado:\n");
//             printf("Titulo: %s\n", vet[i].titulo);
//             printf("Autor: %s\n", vet[i].autor);
//             printf("Ano: %d\n", vet[i].ano);
//             return;
//         }
//     }
//     printf("Livro não encontrado!\n");
// }

// int main() {
//     Livro lista[tamanho];
//     int contador = 0;
//     int opcao;

//     do {
//         printf("\nMenu:\n");
//         printf("1. Adicionar Livro\n");
//         printf("2. Listar Livros\n");
//         printf("3. Buscar Livro\n");
//         printf("0. Sair\n");
//         printf("Escolha uma opcao: ");
//         scanf("%d", &opcao);

//         switch (opcao) {
//             case 1:
//                 AdicionarLivro(lista, &contador);
//                 break;
//             case 2:
//                 ImprimirLista(lista, contador);
//                 break;
//             case 3:
//                 BuscarLivro(lista, contador);
//                 break;
//             case 0:
//                 printf("Saindo...\n");
//                 break;
//             default:
//                 printf("Opcao invalida!\n");
//         }
//     } while (opcao != 0);

//     return 0;
// }

// #include "biblioteca.h"

// // Crie uma biblioteca em C que contenha uma função para calcular o fatorial de um número.
// // Utilize a biblioteca em um programa principal para calcular e exibir o fatorial de um número fornecido pelo usuário.
// int main()
// {
//     int num = 0;
//     printf("Fala um num, seu otario\n");
//     scanf("%d", &num);

//     int fat = Fatorial(num);
//     printf("Resultado: %d\n", fat);

//     return 0;
// }

// Implemente uma lista simplesmente encadeada para armazenar
// números inteiros. Crie funções para inserir um elemento no início da lista e para imprimir todos os elementos da lista.
//  #include <stdio.h>
//  #include <string.h>
//  #include <stdlib.h>

// typedef struct no
// {
//     int info;
//     struct no *prox;
// }No;

// typedef struct lista
// {
//     No *primeiro;
//     No *marcador;
//     No *ultimo;
//     int contador;
// }Lista;

// No *CriaNo(int num)
// {
//     No *novoNo = (No*) malloc(sizeof(No));
//     novoNo->info = num;
//     novoNo->prox = NULL;
//     return novoNo;
// }

// Lista criaLista()
// {
//     Lista lista = {NULL,NULL,NULL,0};
//     return lista;
// }

// void add_No_naLista(Lista *lst, No *no)
// {
//     lst->marcador = lst->primeiro;

//     if (lst->primeiro == NULL){
//         lst->primeiro = no;
//         lst->ultimo = no;
//     }
//     else
//     {
//         lst->primeiro = no;
//         lst->primeiro->prox = lst->marcador;
//     }
//     lst->contador++;
// }
// void ImprimirDado(int i)
// {
// printf("Dado: %d\n", i);
// }

// void ImprimirLista(Lista lst)
// {
//     lst.marcador = lst.primeiro;

//     while (lst.marcador != NULL)
//     {
//         ImprimirDado(lst.marcador->info);
//         lst.marcador = lst.marcador->prox;
//         printf("**************************************\n");
//     }
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     int num = 10;
//     int num2 = 65;
//     int num3 = 69;
//     Lista numeros = criaLista();

//     No *novoNo = CriaNo(num);
//     addNonaLista(&numeros, novoNo);

//     novoNo = CriaNo(num2);
//     addNonaLista(&numeros, novoNo);
//     novoNo = CriaNo(num3);
//     addNonaLista(&numeros, novoNo);
//     ImprimirLista(numeros);

//     return 0;
// }
