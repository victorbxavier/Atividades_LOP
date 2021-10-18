#include<stdio.h>
#include<stdlib.h>
int somDivisores(int n){
    int i=1;
    int soma=0;
    while (i<=n/2){
        if (n%i==0){
            soma+=i;
        }
        i++;       
    }
    return soma;
}
void colegas(int n1, int n2){
    //printf("%i \n %i \n", somDivisores(n1), somDivisores(n2));
    if (abs(somDivisores(n1)-n2)<=2 && abs(somDivisores(n2)-n1)<=2){
        printf("S");
    }else{
        printf("N");
    } 
}
int main(){
    int n1=0;
    int n2=0;
    scanf("%i %i", &n1, &n2);
    colegas(n1,n2);
    return 0;
}