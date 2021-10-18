#include<stdio.h>
#include<math.h>
void torreHanoi(int n, int a, int b, int c){
    if(n>=1){
        torreHanoi(n-1, a, c, b);
        printf("Move o disco em %d para %d\n", a, b);
        torreHanoi(n-1, c, b, a);
    }
}

int main(){

    int nDisco=0;
    int nMovimento=0;

    scanf("%d", &nDisco);
    
    torreHanoi(nDisco, 1, 3, 2);

    
    nMovimento= pow(2, nDisco)-1;

    printf("Total de movimentos: %d", nMovimento);
    return 0;
}