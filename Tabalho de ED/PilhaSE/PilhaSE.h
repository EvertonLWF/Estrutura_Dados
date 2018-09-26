#ifndef PilhaSE_H
#define PilhaSE_H
#define SUCESSO 0
#define PILHA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3
typedef struct {
	 int cod;
	 float salario;
} Funcionario;
typedef struct nodo Nodo;
struct nodo {
	 Funcionario func;
	 Nodo *prox;
};
typedef struct {
	 Nodo *topo;
} Pilha;
void criaPilha(Pilha *p);
int estaVazia(Pilha p);
int desempilha(Pilha *p,Funcionario *f);
int exibePilha(Pilha p);
int empilha(Pilha *p,Funcionario f);
int consultaExistencia(Pilha p,int cod);
void msn(int a);
#endif
