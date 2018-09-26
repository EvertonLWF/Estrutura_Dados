#ifndef Lista_H
#define Lista_H
#define ok 1
#define not_ok 2
#define full 3
#define empty 4
#define max 5
typedef struct{
	int nr;
	char nm[10];
}Dado;
typedef struct{
	Dado d[5];
	int n;
}Lista;

int criaLista(Lista *a);
int incliAntes(Lista *a,Dado b,int c);
int excluiNodo(Lista *a,Dado *b,int c);
void consultaLista(Lista a);
int insereInicio(Lista *a,Dado b);
int inserirNoFim(Lista *a,Dado b);
void exibeLista(Lista a);
void msn(int a);

#endif
