#include <stdio.h>

int main(void){

int i;

struct dogum_tarihi {

int gun;
int ay;
int yil;

};

struct kisi {

char isim[25];
int boy;
struct dogum_tarihi kisi_dt;
};


struct kisi kayit[2] = {"Nazım",173,{4,1,2000},
                     "Hikmet",186,{1,1,2000}};

for (i=0;i<2;i++){

printf("Ad: %s \n Boy : %d \n Doğum tarihi : %d.%d.%d \n\n\n ",kayit[i].isim,kayit[i].boy , kayit[i].kisi_dt.gun,kayit[i].kisi_dt.ay, kayit[i].kisi_dt.yil );

}

return 0;
}
