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
int main() {
    // questao_0()
    questao_1();
    questao_2();
    return 0;
}