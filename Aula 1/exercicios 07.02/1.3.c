#include<stdio.h>
#include<stdlib.h>

void exibeDivisores();

main(){
	int i;
	for(i=1;i<=20;i++){
		exibeDivisores(i);
	}
}

exibeDivisores(int a){
	int i;
	printf("%d:",a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("%d",i);
			if(i<a){
				printf(",");
			}
		}
   }
   printf("\n");
}
