#include <stdio.h>

int main(void){

struct dogum_tarihi {
int gun;
int ay;
int yil;
};

struct kisi { 
char isim[25];
int boy ;
struct dogum_tarihi kisi_dt;
};

struct kisi kayit1={"Nazım" , 173 , {04,01,2000}};
printf("Ad : %s \n  Boy : %d \n Doğum tarihi : %d.%d.%d",kayit1.isim,kayit1.boy,kayit1.kisi_dt.gun , kayit1.kisi_dt.ay , kayit1.kisi_dt.yil);

return 0;
}
