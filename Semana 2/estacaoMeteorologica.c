#include<stdio.h>
int main(){
    int linhas=0,h=0,hdif=0;
    float temp1=0,temp2=0, subtracao=0, subtracaoM=0;
    scanf("%d",&linhas);
    for(int i = 0;i < linhas; ++i){

        scanf("%d %f %f",&h, &temp1, &temp2);
        subtracao=temp1-temp2;

        if(subtracao<0){
            subtracao=subtracao*(-1);
        }

        if(subtracao>subtracaoM){
            subtracaoM=subtracao;
            hdif=h;
        }
    }
    printf("%d", hdif);
    
    return 0;
}