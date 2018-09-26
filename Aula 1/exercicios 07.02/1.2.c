#include<stdio.h>
#include<stdlib.h>

void exibeOnzetracos();
void retangulosTracos();

main(){
//	retanguloTracos();
	printf("\n");
//	retanguloTracos();
}

exibeOnzeTracos(){
	int a;
	for (a=1;a<=11;a++){
		printf("-");
	}
}
retanguloTracos(){
	int a;
	for(a=1;a<=4;a++){
		exibeOnzeTracos();
		printf("\n");
	}
}
