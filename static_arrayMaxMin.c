#include <stdio.h>

int main(void){
int a[3],b,min,max;

for(b=0;b<3;b++){
printf("%d. elemanı giriniz.  ",b+1);
scanf("%d",&a[b]);
}

min=a[0];
max=a[0];

for(b=0;b<3;b++){
  if(a[b]<min)
  min = a[b];
  
  if(a[b]>max)
  max =a[b];

}
printf("\n Girilen en büyük sayı : %d \n Girilen en küçük sayı : %d",max,min);

return 0;
}
