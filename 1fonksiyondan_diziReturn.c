#include <stdio.h>

int *f(int []);

int main(void){
	
	int dizi[2];
	int *p;
	p=f(dizi);
	
	printf("Main fonksiyonu içinde tanımlanan fakat değerleri f fonksiyonunda atannmış ve geriye döndürülmüş dizinin 1 numaralı indeksli değeri : %d",p[1] );
	
	return 0;
}

int *f(int a[]){
	
	a[0]=25;
	a[1]=36;
	
	return a;
}
