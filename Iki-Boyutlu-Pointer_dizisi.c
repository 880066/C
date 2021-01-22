#include <stdio.h>
#include <stdlib.h>

int main(void){

int **matris;
int i,j,satir,sutun;

printf("Satır sayısını giriniz   ");
scanf("%d",&satir);
printf("\n Sütun sayısını giriniz   ");
scanf("%d",&sutun);

matris=(int **) malloc(satir*sizeof(int));
if(matris == NULL)
  printf("\n Yetersiz bellek !!!");

for(i=0;i<satir;i++){
  for(j=0;j<sutun;j++)
    matris[i]=(int *) malloc(sutun * sizeof(int));
    
printf("\n");
}

for (i=0;i<satir;i++){
  for(j=0;j<sutun;j++)
    printf("%d ",matris[i][j]);
printf("\n");
}


for (i=0;i<satir;i++){
   free(matris[i]);         // satırlar için ayrılmış hafızayı boşaltıyoruz.
}
  
free(matris);             //matris boş olduğunu işaretliyoruz. 

return 0;
}
