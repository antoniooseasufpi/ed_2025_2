#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct no
{
    int id;
    struct no *prox;
};

No *cria_lista(){
    return NULL;
}

No *inserir_elemento_inicio(No *lista){
    No *novo = (No*) malloc(sizeof(No));
    printf("Informe um valor ");
    scanf("%d", &novo->id);
    novo->prox = lista;
    return novo;
}

No *inserir_elemento_final(No *lista){
    No *novo = (No*) malloc(sizeof(No));
    No *aux = lista;
    printf("Informe um valor ");
    scanf("%d", &novo->id);
    novo->prox = NULL;
    // se o a lista estiver vazia
    if (aux == NULL)
        return novo;
    else
    {
        while (aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo;
        return lista;   
    }
    
}
// a funcao de mostrar tem um bug, voces devem corrigir
void mostrar_lista(No *lista){
    while (lista->prox != NULL)
    {
        printf("ID - %d ", lista->id);
        lista = lista->prox;
    }
    
}
