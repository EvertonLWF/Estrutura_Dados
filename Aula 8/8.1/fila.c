#include<stdio.h>
#include<stdlib.h>
#include "fila.h"
	int insere(FilaCF *f, int dado){
		if(f->re>f->frente){
			return FILA_CHEIA;
		}
		f->re++;
		f->V[f->re];
		
		return SUCESSO;
	}
	int retira(FilaCF *f, int *dado){
		if(f->re==-1){
			return FILA_VAZIA;
		}
		*dado=f->V[f->frente];
		f->frente++;
		
		return SUCESSO;
	}
	int estaCheia(FilaCF f){
		if(f.re==MAX_NODOS){
			return FILA_CHEIA;
		}
	}
	int estaVazia(FilaCF f){
		if(f.re==-1){
			return FILA_VAZIA;
		}
	}
	void criaFila(FilaCF *f){
		f->re=-1;
		f->frente=0;
		
	}
