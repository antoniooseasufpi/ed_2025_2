#include "caixa.h"
#include <stdlib.h>
#include <stdio.h>

struct caixa
{
    int numeros[5];
    int qtd;
};

Caixa *criar_caixa(){
    Caixa *c = (Caixa *) malloc(sizeof(Caixa));
    c->qtd = 0;
    return c;
}

void add_numero_caixa(Caixa *c, int num){
    if (c->qtd < 5){
        c->numeros[c->qtd] = num;
        c->qtd++;
    }
    else{
        printf("Caixa cheia! Nao e possivel adicionar mais numeros.\n");
    }
}

void imprimir_caixa(const Caixa *c){
    printf("Numeros na caixa: ");
    for (int i = 0; i < c->qtd; i++){
        printf("%d ", c->numeros[i]);
    }
    printf("\n");
}
void liberar_caixa(Caixa *c){
    free(c);
}
