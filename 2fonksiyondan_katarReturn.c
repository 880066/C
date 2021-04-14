#include <stdio.h>

char *f(char *);

int main(void){
	

	char *pointer;
	char *t;
	
	pointer=f(t);
	
	printf("%s",pointer);
	
	return 0;
}

char *f( char *p){
	
	p="kalem";
	
	return p;
}
