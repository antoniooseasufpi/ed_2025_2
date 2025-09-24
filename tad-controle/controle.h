#ifndef CONTROLE_H
#define CONTROLE_H

typedef struct controle Controle;
Controle *criar_controle(); //cria um controle e inicializa os valores

//adicionar e verificar bateria
void add_bateria(Controle *ctrl, int bateria); //adiciona bateria ao controle, o maximo de bateria e 10
int verificar_bateria(Controle *ctrl); //verifica a quantidade de bateria do controle e retorna o valor
void mostrar_bateria(Controle *ctrl); //mostra a quantidade de bateria do controle e consome 1 de bateria

//temperatura
void aumentar_temperatura(Controle *ctrl); //aumenta a temperatura em 1 grau e consome 1 de bateria
void diminuir_temperatura(Controle *ctrl); //diminui a temperatura em 1 grau e consome 1 de bateria
void mostrar_temperatura(Controle *ctrl); //mostra a temperatura atual e consome 1 de bateria
void ativar_modo_brobro(Controle *ctrl); //essa funcao aumenta a temperatura em 5 graus e consome 2 de bateria

//swing
void ativar_swing(Controle *ctrl); //ativa o modo swing e consome 1 de bateria
void desativar_swing(Controle *ctrl); //desativa o modo swing e consome 1 de bateria
void mostrar_swing(Controle *ctrl); //mostra o estado do modo swing e consome 1 de bateria

//liberar
void liberar_controle(Controle *ctrl); //libera a memoria alocada para o controle
#endif // CONTROLE_H