#include <stdio.h>

char *f(void);

int main(void){
	
	char *p;
	p=f();
	
	printf("%s",p);
	
	return 0;
}

char *f(void){
	
	char *pointer;
	pointer ="kalem";
	
	return pointer;
}
