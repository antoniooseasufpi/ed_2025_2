# include <stdio.h>
# include <stdlib.h>
# include "lista.h"

struct no
{
    int info;
    struct no *proximo;
    struct no *anterior;
};

No *criar_lista()
{
    return NULL;
}

No *inserir_elemento(No *lista, int elemento)
{
    No *novo_no = (No *)malloc(sizeof(No));
    if (!novo_no) // Verifica se a alocação foi bem-sucedida
        exit(1);
    
    novo_no->info = elemento;
    novo_no->proximo = lista;
    novo_no->anterior = NULL;

    if (lista != NULL)
    {
        lista->anterior = novo_no;
    }

    return novo_no;
}
void imprimir_lista(No *lista)
{
    No *atual = lista;
    while (atual != NULL)
    {
        printf("%d ", atual->info);
        atual = atual->proximo;
    }
    printf("\n");
}