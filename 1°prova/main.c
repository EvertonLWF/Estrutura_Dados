#include <stdio.h>
#include <stdlib.h>
#include "mega.h"

int main()
{
  int num, r, i;
  ListaCF l;
  criaLista(&l);
  printf("MEGA-SENA - Sorteio de 5 numeros\n");
  for (i=1; i<=MAX_NODOS; i++){
      printf("\n%do. Numero: ",i);
      scanf("%d",&num);
      r = incluiNaOrdem(&l,num);
      if (r == 0)
         printf("Inclusao Realizada!\n");
      exibe(l);
  }
  
  system("PAUSE");	
  return 0;
}
