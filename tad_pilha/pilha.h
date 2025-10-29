#ifndef PILHA_H
#define PILHA_H

typedef struct no No;
typedef struct pilha Pilha;

Pilha* cria_pilha();
void empilha(Pilha* p, int valor);
int desempilha(Pilha* p);
int pilha_vazia(Pilha* p);
int tamanho_pilha(Pilha* p);
int tamanho_pilha_recursivo(No* no);
int tamanho_pilha_recursivo_new(Pilha *p);
//falta fazer a função de liberar a pilha
void libera_pilha(Pilha* p);
void mostrar_pilha(Pilha *p);

#endif