#include<stdio.h>
int decToBin(int n){
    if(n==0){
        return 0;
    }else
        printf("%d", n%2 + decToBin(n/2)*0);
    
}
int main(){
    int a=0;
    scanf("%d", &a);
    if(a==0)
        printf("0");
    else
        a= decToBin(a);
    return 0;
}