#ifndef talao_h
#define talao_h
#include"cheque.h"
typedef struct{
	int nc,n1c;
	cheque t[10];
}talao;
void ct(int a,int b,talao *c);
void ext(talao a);
int ect(int a,float b,talao *c);
int cct(int a,talao *c);
float sct(talao a,int b);


#endif
