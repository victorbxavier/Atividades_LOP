#include<stdio.h>
int main(){

    int n1=0, n2=0, n3=0, n4=0, x=0, y=0;
    scanf("%d %d %d %d\n", &n1, &n2, &n3, &n4);
    scanf("%d %d", &x, &y);

    if((x>=n1 && x<=n3) && (y>=n2 && y<=n4)){
        printf("Dentro!");
    }else{
        printf("Fora!");
    }

    return 0;
}