#ifndef Fila_H
#define Fila_H
#define max 5
#define ok 0
#define oh 1
#define empty 2
#define full 3
typedef struct{
	int nr;
	char nm[10];
}Dado;
typedef struct{
	Dado d[max];
	int fr;
	int re;
	int t;
	
}Fila;
int insere(Fila *f,Dado d);
int retira(Fila *f,Dado *d);
int criaFila(Fila *f);
void exibe(Fila f);
void msn(int a);
#endif
