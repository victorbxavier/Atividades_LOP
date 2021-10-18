#include<stdio.h>
//int notas[7]={100,50,20,10,5,2,1};
//int qtdNotas[7]={0};
int troca=0;
void trocoFunc(int nota, int qtdNotas[7]){

    if(nota>=100){
        qtdNotas[0]++;
        

    }else if(nota>=50){

    }else if(nota>=20){
        qtdNotas[0]++;

    }else if(nota>=10){
        
    }else if(nota>=5){
        qtdNotas[0]++;

    }else if(nota>=2){
        
    }else if(nota>=1){
        
    }
    
    
    
    
}
int main(){

    int valor=0;
    int ex[7]={0};

    scanf("%d", &valor);
    trocoFunc(valor,ex);

    return 0;
}