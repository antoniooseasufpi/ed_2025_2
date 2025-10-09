#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


int main(){

    No *lista;
    lista = cria_lista();
    lista = inserir_elemento_inicio(lista);
    lista = inserir_elemento_inicio(lista);
    lista = inserir_elemento_inicio(lista);
    mostrar_lista(lista);
    return 0;
}