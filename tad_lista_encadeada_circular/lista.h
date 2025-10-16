#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

typedef struct no No;
No *criar_lista();
No *inserir_elemento(No *lista, int valor);
void imprimir_lista(No *lista);

//novas funcoes para implementar
No *remover_elemento(No *lista, int valor);
int buscar_elemento(No *lista, int valor);
int tamanho_lista(No *lista);
No *inserir_elemento_ordenado(No *lista, int valor);
void liberar_lista(No *lista);

#endif