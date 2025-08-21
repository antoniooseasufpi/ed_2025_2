#include <stdlib.h>
#include <stdio.h>

void questao_0() {
    int a, b, *p1, *p2;
    a = 10;
    b = 38;

    printf("%d != 38 \n", a);
    
    p1 = &a; // p1 points to a
    p2 = &b; // p2 points to b
    printf("o valor de p1 e: %d \n", *p1);

    *p1 = *p2;

    printf("%d == 38 \n", a);
    a = 98;
    printf("%d == 38 \n", *p1);
}

void questao_1() {
    int a, b, *p1;
    //atribuir o valor de a a p1
    a = 89;
    p1 = &a;
    
    printf("O valor para ser decrementado de: %d \n", *p1);
    scanf("%d", &b);
    //decrementar b de a
    a -= b;
    printf("%d \n", *p1);   
}

void questao_2() {
    float a, b, *p1, *p2;
    a = 10.5;
    b = 38.2;
    //atribuir o valor de a a p1 e b a p2
    p1 = &a;
    p2 = &b;
    
    //verificar o maior a aprtir dos ponteiros e printar o resultado
    // if (*p1 > *p2) {
    //     printf("O maior valor e: %.2f \n", a);
    // } else {
    //     printf("O maior valor e: %.2f \n", b);
    // }

    printf("o maior valor e: %.2f \n", (*p1 > *p2) ? *p1 : *p2);
}

int questao_3(int *p1, int *p2, int d) {
    return *p1 + *p2 + d;
}

void questao_4(int *vet, int *maior, int tamanho) {
    *maior = vet[0];
    for (int i = 1; i < tamanho; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
    }
}

void questao_5(int *vet, int tamanho, int *maior, int *menor, float *media) {
    *maior = vet[0];
    *menor = vet[0];
    int soma = vet[0];
    for (int i = 1; i < tamanho; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
        if (vet[i] < *menor) {
            *menor = vet[i];
        }
        soma += vet[i];
    }
    *media = (float)soma / tamanho;
}

void capturar(int n, float *x){
    for(int i=0; i<n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &x[i]);
    }
}

int main() {
    // // questao_0()
    // questao_1();
    // questao_2();
    // int vet[] = {10, 20, 30, 40, 50};
    // int maior, menor;
    // float media;
    // questao_4(vet, &maior, 5);
    // printf("O maior valor do vetor e: %d \n", maior);
    // questao_5(vet, 5, &maior, &menor, &media);


    // printf("O maior valor do vetor e: %d \n", maior);
    // printf("O menor valor do vetor e: %d \n", menor);
    // printf("A media dos valores do vetor e: %.2f \n", media);

    float vet2[20];

    capturar(20, vet2);
    
    printf("Valores capturados: \n");
    for(int i = 0; i < 20; i++) 
        printf("%.2f ", vet2[i]);
    return 0;
}