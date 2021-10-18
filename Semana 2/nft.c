#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor=0,temp=0;
    int *vValores;
    scanf("%d",&valor);
    vValores=(int *)malloc(valor*sizeof(int));

    for(int cont=0; cont<valor; ++cont){
        scanf("%d", &temp);
        vValores[cont]=temp;
    }
    for(int i=0; i<valor; ++i){
        for(int j=0; j<vValores[i]; ++j){
            printf("*");
        }
        if(i<valor-1){
            printf("\n");
        }
    }
    free(vValores);
    return 0;
}