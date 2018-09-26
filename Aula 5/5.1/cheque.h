#ifndef cheque_h
#define cheque_h
typedef struct {
	int num,sit;
	float valor;
}cheque;
void cc (int a,cheque *b);
int os(cheque a);
int on(cheque a);
int emc(float a, cheque *b);
void exc(cheque a);
float ov(cheque a);
int cmc(cheque *a);

#endif
