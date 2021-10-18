#include<stdio.h>
int main(){
    //Funcionou no lop, mas não funcionou aqui
    int j1=0,j2=0,j3=0,j4=0, sum=64;
    scanf("%d %d %d %d", &j1, &j2, &j3, &j4);

    sum=sum+j1+j2+j3+j4;

    if(sum==64){
        printf("Ei! Ninguém colocou nada!");
    }else if (sum>90){
        printf("Letra: %c", sum-26);
    }else{
        printf("Letra: %c", sum);
    }

    return 0;
}