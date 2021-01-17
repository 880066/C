#include <stdio.h>
int max(int[5]);
int min(int[5]);
float average(int[5]);

int main (void){
int a[]={8,6,2,4,10};
printf("En büyük değer : %d \n En küçük değer : %d \n Dizinin ortalaması %f",max(a),min(a),average(a));

return 0;
}

int max(int dizi[5]){
int i,buyuk;
buyuk=dizi[0];

for(i=0;i<5;i++){
  if(buyuk>dizi[i])
buyuk= dizi[i];
}
return buyuk;

}

int min(int dizi[5]){
int kucuk=dizi[0], i=0;

for(;i<5;i++)
  if(kucuk<dizi[i])
  kucuk=dizi[i];


return kucuk;
}

float average(int dizi[5]){
int i =0 ;
float toplam=0;
for(;i<5;i++)
  toplam +=dizi[i];

return toplam/5;
}
