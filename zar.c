#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	int bir =0, iki=0, uc=0 , dort=0 , bes=0 ,alti=0 , i =0 , gelen;
  
	for ( ; i <6000000 ; i++ ){
		
		gelen = 1 + (rand() % 6 );
		
		switch(gelen){
			
			case 1:
				bir++;
				break;
				
			case 2:
				iki++;
				break;
				
			case 3:
				uc++;
				break;
				
			case 4:
				dort++;
				break;
				
			case 5:
				bes++;
				break;
				
			case 6:
				alti++;
		}
	}
	
	printf("Gelen\t\tSayi\n");
	printf("1\t\t%d\n2\t\t%d\n3\t\t%d\n4\t\t%d\n5\t\t%d\n6\t\t%d\n",bir,iki,uc,dort,bes,alti);
	
	return 0;
}
