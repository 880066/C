#include <stdio.h>
# include <stdlib.h>

void mutlak (int [] , int);
int main(void){

int a,i,x;

printf("Girilecek eleman sayısını belirtiniz.  ");
scanf("%d",&a);

int *p=(int *) malloc(sizeof(int)*a);

for(i=0;i<a;i++){
printf("\n%d. sayıyı giriniz.  ",i+1);
scanf("%d",&x);
*(p+i)=x;
}

mutlak(p,a);

return 0;
}

void mutlak(int dizi[], int eleman_sayisi ){

int i=0;

for(;i<eleman_sayisi;i++){
  if(dizi[i]<0)
    dizi[i] *= -1;
}

for(i=0;i<eleman_sayisi;i++){
  printf("\n%d",dizi[i]);
}

}
