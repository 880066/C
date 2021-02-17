#include <stdio.h>
#include <stdlib.h>

typedef enum {
erkek,
kadin
}cinsiyet;

typedef struct {
int yas;
cinsiyet c;
}kisi;

int main (void){

kisi *nazim;
nazim=(kisi*)malloc(sizeof(kisi));
nazim -> yas=21;
nazim -> c=erkek;

printf("Yaş : %u \n cinsiyet : %u ",nazim->yas ,nazim->c);

return 0 ;
}
