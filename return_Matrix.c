#include <stdio.h>
#include <stdlib.h>

int **f(void);

int main (void){
	
	
	int **p = f();
	
	printf("%d",p[1][2]);
	
	int i ;
	
	for ( i = 0 ; i<2 ; i++)
		free(p[i]);
		
	free(p);
		
	return 0;
}

int **f(void){
	
	int **t;
	t=(int **) malloc(2*sizeof(int));
	
	int i , j;
	
	for ( i = 0 ; i <2 ; i++)
		t[i]=(int *) malloc(3*sizeof(int));
		
	for (i=0 ; i < 2 ; i++){
		for( j=0 ; j<3; j++)
			t[i][j]=i*j*j;
	}
	
	return t;
	
	
}
