#ifndef FilaSE_H
#define FilaSE_H

#define SUCESSO 0
#define FILA_VAZIA 1
#define FALTOU_MEMORIA 2
#define NUMERO_INEXISTENTE 3
#define VOO_SIM 4
#define VOO_NAO 5

typedef struct{
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
}FilaSE;

void criaFila(FilaSE *fila);
int insere(FilaSE *fila,Voo voo);
int retira(FilaSE *fila,Voo *voo);
void exibeFila(FilaSE fila);
int quantidadeDeVoos(FilaSE fila,int *x);
int consultaExistencia(FilaSE fila,int numero);

#endif
