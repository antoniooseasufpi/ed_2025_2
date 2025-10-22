#ifndef LISTA_ENCADEADA_DUPLA_H
#define LISTA_ENCADEADA_DUPLA_H

typedef struct no No;

No *criar_lista();
No *inserir_elemento(No *lista, int elemento);

// funcos a serem implementadas
No *inserir_no_fim(No *lista, int elemento);
void imprimir_lista(No *lista);
void liberar_lista(No *lista);
void buscar_elemento(No *lista, int elemento);
No *remover_elemento(No *lista, int elemento);


#endif // LISTA_ENCADEADA_DUPLA_H