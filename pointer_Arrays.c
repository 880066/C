#include <stdio.h>

int main(void){

int i,j;

int line1[8]={1};
int line2[8]={2};
int line3[8]={3};

int *p[3];

p[0]=line1;
p[1]=line2;
p[2]=line3;

for(i=0;i<3;i++){
  for(j=0;j<8;j++)
    printf("%d",p[i][j]);
  
  printf("\n"); 
  }


return 0; 
}
