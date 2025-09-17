#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNOS 10
typedef struct turma Turma;
typedef struct aluno Aluno;
struct aluno {
    int matricula;
    char nome[50];
    float *notas;
};
struct turma {
    char codigo[10];
    Aluno *alunos;
    int num_alunos;
};

//funcoes que devem ser implementadas
Turma* criar_turma(const char* codigo){
    Turma *turma = (Turma *) malloc(sizeof(Turma)); //alocamos a turma
    strcpy(turma->codigo, codigo);
    turma->alunos = (Aluno*) malloc(sizeof(Aluno) * MAX_ALUNOS); //alocamos os alunos para a turma
    turma->num_alunos = 0;
    return turma;
}
void adicionar_aluno(Turma* turma){
    if (turma->num_alunos < MAX_ALUNOS){
        printf("Informe matricula do aluno ");
        scanf("%d", &turma->alunos[turma->num_alunos].matricula);
        printf("Informe nome do aluno ");
        scanf("%s", turma->alunos[turma->num_alunos].nome);
        //alocar as notas para cada aluno
        turma->alunos[turma->num_alunos].notas = (float *) calloc(2, sizeof(float));
        for (int i =0; i < 2; i++){
            printf("Informe a nota %d", i+1);
            scanf("%f", &turma->alunos[turma->num_alunos].notas[i]);
        }
        //incrementar o numero de alunos na turma
        turma->num_alunos++;
    }
    else{
        printf("Nao ha espaco para mais alunos \n");
        return ;
    }
}
void liberar_turma(Turma* turma);
void imprimir_turma(const Turma* turma){
    if (turma->num_alunos == 0){
        printf("Turma vazia! \n");
        return ; 
    }
    printf("Turma: %s\n", turma->codigo);
    for (int i = 0; i < turma->num_alunos; i++){
        printf("Aluno: %s | Matricula %d \nNotas: ", turma->alunos[i].nome, turma->alunos[i].matricula);
        for (int j = 0; j < 2; j++)
            printf("%.2f ", turma->alunos[i].notas[j]);
    }
    printf("\n");
}
int menu(){
    int op;
    printf("1 - cadastrar aluno \n");
    printf("2 - mostrar turma \n");
    printf("0 - sair \n");
    scanf("%d",&op);
    return op;
}
int main(){
    int op;
    Turma *t = NULL;
    t = criar_turma("SI-EDI");

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            adicionar_aluno(t);
            break;
        case 2:
            imprimir_turma(t);
            break;
        default:
            printf("Opcao invalida");
            break;
        }
    } while (op != 0);
    
    return 0;
}

