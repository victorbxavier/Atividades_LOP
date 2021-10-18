#include<stdio.h>
//Estrategia contar a qtd de dias ate a data a partir do ano da data 1 de ambas as datas e subtrair
//a data2 pela 1
const int diasMes[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void difData(int dfunc1,int mfunc1,int afunc1,int dfunc2,int mfunc2,int afunc2){

    int dias1=365*afunc1;
    for(int i=0; i<mfunc1-1; i++)
    dias1+=diasMes[i];  

    dias1+=dfunc1;

    int dias2=365*afunc2;
    for(int i=0; i<mfunc2-1; i++)
    dias2+=diasMes[i];
    
    dias2+=dfunc2;
    int resultado=dias2-dias1;

    printf("%d",resultado);
}

int main(){
    int d1=0,m1=0,a1=0,d2=0,m2=0,a2=0;
    scanf("%d %d %d\n%d %d %d", &d1, &m1, &a1, &d2, &m2, &a2);
    difData(d1,m1,a1,d2,m2,a2);
    return 0;
}