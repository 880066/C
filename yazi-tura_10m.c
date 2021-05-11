#include <stdio.h>
#include <stdlib.h>

int main(void){


int i = 0 , yazi =0 , tura =0 , gelen;

for ( ; i < 10000000; i++ ){
	
	gelen = rand() % 2;
	
	switch(gelen){
		
		case 0:
			yazi++;
			break;
			
		case 1:
			tura++;
	}
}

printf("Yazi\t\tTura\n%d\t\t%d\n",yazi,tura);

return 0;
}
