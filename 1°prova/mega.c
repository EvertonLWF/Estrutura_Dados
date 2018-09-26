#include <stdlib.h>
#include <stdio.h>
#include "mega.h"

int criaLista(ListaCF *l){
    l->n = 0;
}

void exibe(ListaCF l){
     int i;
     printf("Numeros em Ordem: ");
     for (i=0; i<l.n; i++)
         printf("%d ", l.v[i]);
     printf("\n");
}

int estaVazia(ListaCF l){
    if (l.n == 0) return(LISTA_VAZIA);
    else return(0);
}

int estaCheia(ListaCF l){
    if (l.n == MAX_NODOS) return(LISTA_CHEIA);
    else return(0);     
}

int incluiAntes(ListaCF *l, int num){
   int i,j;
   if(l->n==MAX_NODOS){
   		return LISTA_CHEIA;
   }
   if(l->n==0){
   		l->v[l->n]=num;
   		l->n++;
   		return SUCESSO;
 		
 		
   }
   for(i=0;i<l->n;i++){
   		if(l->v[i]>num){
   			for(j=l->n;j>i;j--){
   				l->v[j]=l->v[j-1];
   			}
   		    l->v[i]=num;
   		    l->n++;
  			return SUCESSO;	
   			
   		}
   }
   
}

int incluiNoFim(ListaCF *l, int num){
	if(l->n==MAX_NODOS){
   		return LISTA_CHEIA;
   }
   l->v[l->n]=num;
   l->n++;
   return SUCESSO;
   
}

int incluiNaOrdem(ListaCF *l, int num){
	int i;
	if(num>l->v[l->n-1]){
		incluiNoFim(l,num);
	}
	else{
		incluiAntes(l,num);
	}
}
