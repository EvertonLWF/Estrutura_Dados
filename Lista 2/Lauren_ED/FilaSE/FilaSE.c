#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "FilaSE.h"


void criaFila(FilaSE *fila){
	fila->frente=NULL;
	fila->re=NULL;
}
int insere(FilaSE *fila,Voo voo){
	Nodo *pNodo;
	pNodo=(Nodo *) malloc (sizeof(Nodo));
	if(pNodo==NULL)
	return FALTOU_MEMORIA;

	pNodo->v=voo;
	if(fila->frente==NULL && fila->re==NULL){
		fila->frente=pNodo;
		fila->re=pNodo;
		pNodo->prox=NULL;
		return SUCESSO;
	}
		
	else{
		pNodo->prox=NULL;
		fila->re->prox=pNodo;
		fila->re=pNodo;
		return SUCESSO;
	}
}
int retira(FilaSE *fila,Voo *voo){
    Nodo *pTemp;
    if (fila->frente==NULL && fila->re==NULL){
		 return FILA_VAZIA;
	}
    pTemp=fila->frente;
    *voo=pTemp->v;
    if(fila->frente==fila->re){
    	fila->frente=NULL;
    	fila->re=NULL;
    	free(pTemp);
    	return SUCESSO;
	}else{
		fila->frente=pTemp->prox;
		free(pTemp);
		return SUCESSO;
		
	}        
}
void exibeFila(FilaSE fila){
    Nodo *pNodo;
    pNodo=fila.frente;
        while(pNodo!=NULL){
        	
            printf("\n Numero do voo: %d Cia:%s \n ",pNodo->v.num,pNodo->v.cia);
            pNodo=pNodo->prox;
            
        }
    
}
int quantidadeDeVoos(FilaSE fila,int *x){
	Nodo *pNodo;
    pNodo=fila.frente;
    int cont=0;
   if (fila.frente==NULL && fila.re==NULL) 
       return FILA_VAZIA;
    else {
        while(pNodo!=NULL){	
		    cont++;
		    pNodo=pNodo->prox;
		}
		*x=cont;
return SUCESSO;
}
}
int consultaExistencia(FilaSE fila,int numero){
	FilaSE f;
	criaFila(&f);
	Voo v;
	while(fila.frente!=NULL){
		if(numero==fila.frente->v.num){
			return SUCESSO;
		}
		retira(&fila,&v);
		insere(&f,v);
	}
	return NUMERO_INEXISTENTE;
}
