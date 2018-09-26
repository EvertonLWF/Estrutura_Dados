#ifndef cheque_h
#define cheque_h
typedef struct {
	int num,sit;
	float valor;
}cheque;
typedef struct{
	int nc,n1c;
	cheque t[10];
}talao;
void ct(int a,int b,talao *c);
void ext(talao a);
int ect(int a,float b,talao *c);
int cct(int a,talao *c);
float sct(talao a,int b);
void cc (int a,cheque *b);
int os(cheque a);
int on(cheque a);
int emc(float a, cheque *b);
void exc(cheque a);
float ov(cheque a);
int cmc(cheque *a);

#endif
