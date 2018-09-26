#ifndef PilhaSE_H
#define PilhaSE_H

#define SUCESSO 0
#define PILHA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3

typedef struct{
	int cod;
	float salario;
}Funcionario;

typedef struct nodo Nodo;
struct nodo{
	Funcionario func;
	Nodo *prox;
};

typedef struct{
	Nodo *topo;
}PilhaSE;

void criaPilha(PilhaSE *p);
int empilha(PilhaSE *p,Funcionario func);
int desempilha(PilhaSE *p,Funcionario *func);
void exibePilha(PilhaSE p);
int estaVazia(PilhaSE p);
int consultaExistencia(PilhaSE p,int cod);

#endif
