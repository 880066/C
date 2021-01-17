#include <stdio.h>

int main(void){
    
    int a,b,c,toplam;
    float average;
    float nots[10];
    int alt =0 , ust =0;
    toplam=0;
    for (a=0;a<10;a++){
        printf("%d . Notu giriniz.  ",a+1);
        scanf("%f",&nots[a]);
    }
    
    for(b=0;b<10;b++){
        toplam += nots[b];
    }
    average=toplam/10;
    
    printf("\n toplam : %d",toplam);
    printf("\n ortalama : %f",average);
    
    for(c=0;c<10;c++){
        if(nots[c]<average)
            alt++;
            
        else if (nots[c]>average)
            ust++;
            
        else
        continue;
    }
    
    printf("\n ortlamanın altında olan not sayısı : %d \n ortalamanın üstünde olan not sayısı : %d \n ortalamaya eşit not sayısı : %d",alt,ust,10-alt-ust);
    
    return 0;
}
