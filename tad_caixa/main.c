#include "caixa.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Caixa *minha_caixa = criar_caixa();
    add_numero_caixa(minha_caixa, 10);
    add_numero_caixa(minha_caixa, 20);
    add_numero_caixa(minha_caixa, 30);
    imprimir_caixa(minha_caixa);
    add_numero_caixa(minha_caixa, 40);
    add_numero_caixa(minha_caixa, 50);
    add_numero_caixa(minha_caixa, 60);

    imprimir_caixa(minha_caixa);
    
    liberar_caixa(minha_caixa);
    return 0;
}