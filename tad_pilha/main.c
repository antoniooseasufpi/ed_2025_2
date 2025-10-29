#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha* minha_pilha = cria_pilha();
    empilha(minha_pilha, 10);
    empilha(minha_pilha, 20);
    empilha(minha_pilha, 30); 
    printf("Tamanho da pilha (recursivo): %d\n", tamanho_pilha_recursivo_new(minha_pilha));
    mostrar_pilha(minha_pilha);
    
    // libera_pilha(minha_pilha);
    return 0;
}