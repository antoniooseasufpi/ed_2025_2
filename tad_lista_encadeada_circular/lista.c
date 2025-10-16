#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no {
    int valor;
    struct no *prox;
};

No *criar_lista() {
    return NULL;
}

No *inserir_elemento(No *lista, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    if (!novo) {
        printf("Erro ao alocar memoria.\n");
        return lista;
    }
    novo->valor = valor;
    if (lista == NULL) {
        novo->prox = novo; // Aponta para si mesmo
        return novo;
    } else {
        
        // Encontra o último nó para atualizar seu próximo
        No *temp = lista;
        while (temp->prox != lista) {
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->prox = lista;
        return novo;
    }
}

void imprimir_lista(No *lista){
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    No *temp = lista;
    do {
        printf("%d -> ", temp->valor);
        temp = temp->prox;
    } while (temp != lista);
    printf("(volta ao inicio)\n");
}