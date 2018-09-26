#ifndef FilaSE_H
#define FilaSE_H
#define SUCESSO 0
#define FILA_VAZIA 1
#define FALTOU_MEMORIA 2
#define NUMERO_INEXISTENTE 3
#define VOO_ESTA 4

typedef struct  {
	int num;
	char cia[10];
}Voo;

typedef struct nodo Nodo;

struct nodo{
	Voo v;
	Nodo *prox;
};

typedef struct{
	Nodo *frente;
	Nodo *re;
}Fila;
void criaFila(Fila *f);
int quantidadeVoo(Fila f);
int retira(Fila *f,Voo *v);
int exibeFila(Fila f);
int insere(Fila *f,Voo v);
int consultaExistencia(Fila f,int a);
void msn(int a);

#endif
