#include <stdio.h>
#include <stdlib.h>

int *bin(unsigned long long int ,int *);


int main(void){
	
	unsigned long long int dec;
	int us;
	printf("Dec: ");
	scanf("%lld",&dec);
	
	int *ptr=bin(dec,&us);

  printf("\nBin: ");
	for(;us>-1;us--)
		if ( us !=0)
		printf("%d",ptr[us-1]);
	
	free(ptr);
	
	return 0;
}

int *bin(unsigned long long int dec , int * us){
	
	int *p;
	p=(int*)malloc(0*sizeof(int));
	
	* us = 0;
	int mood;
	while(dec > 0){
		mood = dec % 2;
		dec -= mood;
		* us += 1;
		dec /=2;
		p=(int *) realloc(p,((*us))*sizeof(int));
		*(p + *us -1)=mood;
	}
	
	return p;
	
}

