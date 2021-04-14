#include <stdio.h>

char *f(char []);


int main(void){
	
	char katar[6];
	char *p;
	p=f(katar);
	
	printf("%s",p);
	
	return 0;
}

char *f(char a[]){
	
	a="Kalem";
	
	return a;
}
