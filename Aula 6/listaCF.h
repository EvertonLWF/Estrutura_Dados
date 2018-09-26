#ifndef listaCF_H
#define listaCF_H
#define MAX_NODOS 5
#define SUCESSO 0
#define LISTA_VAZIA 1
#define LISTA_CHEIA 2
#define POSICAO_INVALIDA 3
#define CODIGO_INEXISTENTE 4

	typedef struct{
		int cod;
		float peso;
	}Dado;
	typedef struct{
		int n;
		Dado v[MAX_NODOS];
	}listaCF;
	void criaLista(listaCF *a);
	void exibe(listaCF a);
	int estaCheia(listaCF a);
	int excluiDoFim(listaCF *a, Dado*b);
	int excluiDoInicio(listaCF *a,Dado *b);
	int existe(listaCF a,int b);
	int incluiNaPosicao(listaCF *a,int b,Dado c);
	int incluiAntes(listaCF *a,int b,Dado c);
	int incluiNoFim(listaCF *a,Dado b);
	int quantidadeDeNodos(listaCF a);
	int estaVazia(listaCF a);
	int incluiNoInicio(listaCF *a,Dado b);
	int consultaPorPosicao(listaCF a,int b,Dado *c);
	int consultaPorCodigo(listaCF a,int b,Dado *c,int *z);
	int excluiDaPosicao(listaCF *a,int b,Dado *c);
	int excluiNodo(listaCF *a,int b,Dado *c);
	void exibeSituacao(listaCF a);	
	
#endif
