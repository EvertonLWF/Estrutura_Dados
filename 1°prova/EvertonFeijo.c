//--------------------------------------------------------------1)a
 _     _ 
  |   |
  |   |
  |   |
  | 20|
  | 10|
  +---+
  
  x=40  y=50 v=60 w=30  topo=1
 
  
 //--------------------------------------------------------------1)b 
  
  ------------------
  90 
  ------------------
  
  x=10 y=20 z=30 w=60 frente=4 re=4
  
  insere(&f,120); //fila esta cheia
  
//--------------------------------------------------------------1)c
	
  ------------------
  90|120|150
  ------------------
  
 x=10 y=30 z=60 frente=0 re=2



//--------------------------------------------------------------2)a
int retiraDaFila(FilaCF *f,Processo *p){
	if(f->re==-1){
		return FILA_VAZIA;
	}
	*p=f->v[f->frente];
	f->frente++;
	return SUCESSO;
	
}
//--------------------------------------------------------------2)b
void exibeFila(FilaCF f){
	int i;
	for(i=f->frente;i<f->re;i++){
		printf("\nPosicao = %d Cod = %d Nome = %s\n",i,f->v[i].cod,f->v[i].nome);
	}
}

//---------------------------------------------------------------2)c
typedef struct{
	int frente,re,tamanho;
	Processo v[MAX_NODOS];
}FilaCF;

int retiraDaFila(FilaCF *f,Processo *p){
	if(f->tamanho==0){
		return FILA_VAZIA;
	}
	*p=f->v[f->frente];
	f->frente++;
	f->tamanho--;
	return SUCESSO;
	
}







//-----------------------------------------------------------------------3)
int incluiAntes(ListaCF *l, int num){
   int i,j;
   if(l->n==MAX_NODOS){
   		return LISTA_CHEIA;
   }
   if(l->n==0){
   		l->v[l->n]=num;
   		return SUCESSO;
   }
   for(i=0;i<l->n;i++){
   		if(l->v[i]>num){
   			for(j=l->n;j>i;j--)
   				l->v[j]=l->v[j-1];
   			}
   		    l->v[j]=num;
   		    l->n++;
  			return SUCESSO;	
   			
   		}
   		incluiNoFim(l,num);	
   	
   
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
	for(i=0;i<=l->n;i++){
		if(l->v[i]<num){
			incluiNoFim(l,num);
			return SUCESSO;
		}else{
			incluiAntes(l,num);
			return SUCESSO;
		}
	}
}
