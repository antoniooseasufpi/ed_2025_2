# include <stdio.h>
# include <stdlib.h>
# include "lista.h"

int main()
{
    No *lista = criar_lista();

    lista = inserir_elemento(lista, 10);
    lista = inserir_elemento(lista, 20);
    lista = inserir_elemento(lista, 30);
    lista = inserir_elemento(lista, 40);
    
    imprimir_lista(lista);

    return 0;
}