#ifndef CAIXA_H
#define CAIXA_H

typedef struct caixa Caixa;
Caixa *criar_caixa();
void add_numero_caixa(Caixa *c, int num);
void imprimir_caixa(const Caixa *c);
void liberar_caixa(Caixa *c);

#endif // CAIXA_H