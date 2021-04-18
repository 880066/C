#include <stdio.h>

int main(void){
	
	int a=5 , x;
	char b = 'k' , y;
	float c =3.14 , z;
	
	FILE *outfile, *infile;
	
	outfile=fopen("test.txt","w");
	fprintf(outfile,"%d%c%f",a,b,c);
	fclose(outfile);
	
	infile=fopen("test.txt","r");
	fscanf(infile,"%d%c%f",&x,&y,&z);
	fclose(infile);
	
	printf("%d%c%.2f",x,y,z);
	return 0;
}
