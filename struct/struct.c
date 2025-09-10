#include <stdio.h>
#include <stdlib.h>

typedef struct produto Produto; // criar alias/apelido

//declarar a sctruct
struct produto {
    int id;
    float valor;
    char nome[50];
};

//alocacao suando mallco e tamanho fixo
Produto *alocar_malloc(int n){
    Produto *produtos;
    produtos = (Produto *)malloc(sizeof(Produto) * n); //alocar os dados necessarios de acordo com o tamanho n
    //verificar se a alocacao foi feita com sucesso
    if (produtos == NULL){
        printf("Erro de alocacao!\n");
        exit(1);
    }

    // iniciar o cadastro dos produtos
    printf("Dados para cadastro do produto\n");
    for (int i = 0; i < n; i++){
        produtos[i].id = rand() % 1000;
        printf("Nome: ");
        scanf("%s", produtos[i].nome);
        printf("Valor: ");
        scanf("%f", &produtos[i].valor);   
    }
    return produtos;
}

void mostrar_produtos(Produto *produtos, int pos){
    for(int i = 0; i < pos; i++){
        printf("Produto %d: %s - R$ %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].valor);
    }
}

void liberar_memoria(Produto *produtos){
    free(produtos);
}

int menu(){
    int opcao;
    printf("1 - Cadastrar produto\n");
    printf("2 - Listar produtos\n");
    // printf("3 - Remover produto\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);
    return opcao;
}
int main(){
    Produto *produtos = NULL;
    int op;
    do{
        op = menu();
        switch(op){
            case 1:
                produtos = alocar_malloc(3);
                break;
            case 2:
                mostrar_produtos(produtos, 3);
                break;
            case 0:
                printf("Saindo...\n");
                liberar_memoria(produtos);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(op != 0);
    return 0;
}
