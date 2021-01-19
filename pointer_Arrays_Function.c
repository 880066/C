#include <stdio.h>

void adress(int *[]);

int main(void){
    
    int line1[8];
    int line2[8];
    int line3[8];
    
    int *p[]={line1,line2,line3};
    adress(p);
    
    
    return 0;
}

void adress(int *point[]){
    
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<8;j++)
            printf("%p\n",&point[i][j]);
        
        printf("\n\n\n");
    }
    
}
