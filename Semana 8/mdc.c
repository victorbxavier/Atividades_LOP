#include<stdio.h>

int mdc(int a, int b){
    if (a == 0){
        return b;
    }else if (b == 0){
       return a;
    }

    if(a==b){
        return a;
    }
    if(a>b){
        return mdc(a%b,b);
    }else{
        return mdc(a, b%a);
    }
}
int main(){

    int varMdc=0;
    int pEle, sEle, tEle;

    scanf("%d %d %d", &pEle, &sEle, &tEle);

    varMdc = mdc(pEle, sEle);
    varMdc = mdc(varMdc, tEle);

    printf("MDC de %d, %d e %d: %d", pEle, sEle, tEle, varMdc);

    return 0;
}