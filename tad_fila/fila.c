#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no {
    int valor;
    No* prox;
};

struct fila {
    No* inicio;
    No* final;
};

Fila* cria_fila() {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->inicio = NULL;
    f->final = NULL;
    return f;
}

void enfileira(Fila* f, int valor){
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->prox = NULL;
    
    if (!f->final && !f->inicio) {
        f->inicio = novo_no;
        f->final = novo_no;
    } else {
        f->final->prox = novo_no;
        f->final = novo_no; 
    }    
}
int desenfileira(Fila* f) {
    if (!f->inicio) {
        printf("Fila vazia! Nao e possivel desenfileirar.\n");
        return -1; // valor de erro
    }

    No* temp = f->inicio;
    int valor = temp->valor;
    f->inicio = f->inicio->prox;

    // se a fila ficar vazia, atualiza o final
    if (!f->inicio) {
        f->final = NULL;
    }

    free(temp);
    return valor;
}

void mostra_fila(Fila* f) {
    No* atual = f->inicio;
    while (atual) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}