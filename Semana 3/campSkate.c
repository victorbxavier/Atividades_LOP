#include<stdio.h>
int comparacao(int n1, int n2, int n3){
    if(n1==n2 || n1==n3){
        return n1;
    }else if (n2==n3){
        return n2;
    }else if (n1 > n3 && n1 < n2){
        return n1;
    }else if (n1 > n2 && n1 < n3){
        return n1;
    }else if (n2 > n3 && n2 < n1){
        return n2;
    }else if (n2 > n1 && n2 < n3){
        return n2;
    }else{
        return n3;
    }    
}
int leitura(){
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);
    return comparacao(n1, n2, n3);
}
int scoreJogador(){
    return comparacao(leitura(), leitura(), leitura());
}

int main(){
    int a,b;
    a=scoreJogador();
    b=scoreJogador();
    a>b ? printf("A") : 
        b>a ? printf("B") : 
        printf("empate");
    return 0;
}