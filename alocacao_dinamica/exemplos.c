#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int **alocar_malloc(int n, int m) {
    int **matriz = (int **)malloc(n * sizeof(int *)); // alocar a linhas
    
    if (matriz == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int)); // alocando as colunas
    }
    return matriz;
}

int **alocar_calloc(int n, int m) {
    int **matriz = (int **)calloc(n, sizeof(int *));
    
    if (matriz == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)calloc(m, sizeof(int));
    }
    return matriz;
}

int **alocar_realloc(int **mat, int n, int m) {
    int **matriz = (int **)realloc(mat, n * sizeof(int *));
    
    if (matriz == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)realloc(mat[i], m * sizeof(int));
    }
    return matriz;
}

void preencher_matriz(int **matriz, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 100;//leitura randomica de 0 a 99
            // scanf("%d", &matriz[i][j]);//leitura via teclado
        }
    }
}
void printar_matriz(int **matriz, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberar_matriz(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main(){
    srand(time(NULL)); 
    int **mat, lin, col;
    lin = 3;
    col = 4;

    printf("Matriz alocada com calloc:\n");
    mat = alocar_calloc(lin, col);
    printar_matriz(mat, lin, col);
    
    printf("Matriz preenchida com valores randomicos:\n");
    preencher_matriz(mat, lin, col);
    printar_matriz(mat, lin, col);

    printf("Matriz realocada com realloc:\n");
    mat = alocar_realloc(mat, lin + 2, col + 2);
    printar_matriz(mat, lin + 2, col + 2);

    liberar_matriz(mat, lin + 2);

    return 0;
}