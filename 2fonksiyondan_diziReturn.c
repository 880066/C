#include <stdio.h>

int *f(void);

int main(void){
	
	int *p;
	
	p=f();
	
	printf("Main fonksiyonu içinde tanımlanan fakat değerleri f fonksiyonunda atannmış ve geriye döndürülmüş dizinin 1 numaralı indeksli değeri : %d",p[1]);
	
	return 0;
}

int *f(void){
	
	int a[]={25,36};
	
	int *pointer;
	pointer=a;         // pointer tanımlamadan , dizinin kendisi olan a 'yı return edersek local adres return etmiş oluruz.
	
	
	
	return pointer;
}
