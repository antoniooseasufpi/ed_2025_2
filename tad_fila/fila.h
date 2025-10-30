#ifndef FILA_H
#define FILA_H

typedef struct no No;
typedef struct fila Fila;

Fila* cria_fila();
void enfileira(Fila* f, int valor);
int desenfileira(Fila* f);
void mostra_fila(Fila* f);

#endif // FILA_H