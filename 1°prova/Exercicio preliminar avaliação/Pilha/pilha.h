#ifndef pilha_H
#define pilha_H
#define ok 1
#define not_ok 2
#define full 3
#define empty 4
#define max 5
#define exist 6
#define dont_exist 7
typedef struct{
	int nr;
	char nm[10];
}Dado;
typedef struct{
	Dado d[5];
	int topo;
}Pilha;
void exibe(Pilha a);
int criaPilha(Pilha *a);
int empilha(Pilha *a,Dado b);
int desempilha(Pilha *a,Dado *b);
int verificaExistencia(Pilha a,Dado b);

#endif
