#ifndef LISTA_H
#define LISTA_H

typedef struct no No;
No *cria_lista();
No *inserir_elemento_inicio(No *lista);
No *inserir_elemento_final(No *lista);

//novas funcoes para implementar
void mostrar_lista(No *lista);
void liberar_lista(No *lista);
int tamanho_lista(No *lista);
int buscar_elemento(No *lista, int id);
No *remover_elemento(No *lista, int id);
No *adicionar_elemento_ordenado(No *lista, int id);

#endif

