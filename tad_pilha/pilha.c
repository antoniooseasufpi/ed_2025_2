#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no {
    int dado;
    struct no* prox;
};

struct pilha {
    No* topo;
};

Pilha* cria_pilha() {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void empilha(Pilha* p, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

int desempilha(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia! Nao e possivel desempilhar.\n");
        return -1; // Indicador de erro
    }
    No* temp = p->topo;
    int valor = temp->dado;
    p->topo = p->topo->prox;
    free(temp);
    return valor;
}

int pilha_vazia(Pilha* p) {
    return p->topo == NULL;
}

int tamanho_pilha_recursivo(No* no) {
    if (no == NULL) {
        return 0;
    }
    return 1 + tamanho_pilha_recursivo(no->prox);
}

int tamanho_pilha(Pilha* p) {
    return tamanho_pilha_recursivo(p->topo);
}

int tamanho_pilha_recursivo_new(Pilha *p){
    if (p->topo == NULL) {
        return 0;
    }
    return 1 + tamanho_pilha_recursivo(p->topo->prox);
}

void mostrar_pilha(Pilha *p){
    No *aux = p->topo;
    while (aux != NULL)
    {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
}

