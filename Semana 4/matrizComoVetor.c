#include<stdio.h>
#include<stdlib.h>
int main(){
    int qtdVal=0, qtdLin=0, qtdCol=0, lin=0,col=0, valorMat=0;

    scanf("%d", &qtdVal);

    int *vet=malloc(qtdVal*sizeof(int));

    for (int i = 0; i < qtdVal; i++){
        scanf(" %d", vet+i);
    }

    scanf("%d %d", &qtdLin, &qtdCol);
    scanf("%d %d", &lin, &col);

    valorMat=(lin*qtdCol)+col;
    printf("%d", vet[valorMat]);
    free(vet);
    return 0;
}