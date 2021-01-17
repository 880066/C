#include <stdio.h>

void f(int [5]);
int main(void){
int a[]={1,3,5,7,10};
f(a);

return 0;
}

void f (int g[5]){
int i;
for(i=0;i<5;i++)
printf("%d\n",g[i]);

}
