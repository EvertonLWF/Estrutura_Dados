#ifndef fila_H
#define fila_H
#define MAX_NODOS 5
#define SUCESSO 0
#define FILA_VAZIA 1
#define FILA_CHEIA 2

	typedef struct{
		int V[MAX_NODOS];
		int re;
		int frente;
	}FilaCF;
	int insere(FilaCF *f, int dado);
	int retira(FilaCF *f, int *dado);
	int estaCheia(FilaCF f);
	int estaVazia(FilaCF f);
	void criaFila(FilaCF *f);


#endif
