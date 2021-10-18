#include<stdio.h>
#include<stdlib.h>
void leituraInt(int *pont){

    for (int i = 0; i < 10; i++){
        scanf("%d ", &pont[i]);
    }

}
void leituraFl(float *pont){

    for (int i = 0; i < 10; i++){
        scanf("%f ", &pont[i]);
    }

}
float maior(float *ptr){
    float m=ptr[0];
    for (int i = 0; i < 10; i++)
        if (ptr[i]>m)
            m=ptr[i];
        
    return m;
}

float menor(float *ptr){
    float m=ptr[0];
    for (int i = 0; i < 10; i++)
        if (ptr[i]<m)
            m=ptr[i];
        
    return m;
}


void verificaImpedidos(int *tA, int *tB, float *pTA, float *pTB){

    int contImpA=0, contImpB=0;

    float maiorVal=maior(pTB);
    float menorVal=menor(pTA);

    if (pTA[0]>maiorVal){
        contImpA++;
    }
    if (pTA[1]>maiorVal){
        contImpA++;
    }
    if (pTA[2]>maiorVal){
        contImpA++;
    }
    if (pTA[3]>maiorVal){
        contImpA++;
    }
    if (pTA[4]>maiorVal){
        contImpA++;
    }
    if (pTA[5]>maiorVal){
        contImpA++;
    }
    if (pTA[6]>maiorVal){
        contImpA++;
    }
    if (pTA[7]>maiorVal){
        contImpA++;
    }
    if (pTA[8]>maiorVal){
        contImpA++;
    }
    if (pTA[9]>maiorVal){
        contImpA++;
    }

    if (contImpA==0 || pTA[9]==-0.5){
        printf("A: sem impedimentos");
    }else{
        printf("A: ");

    if (pTA[0]>maiorVal){
        printf("%d ", tA[0]);
    }
    if (pTA[1]>maiorVal){
       printf("%d ", tA[1]);
    }
    if (pTA[2]>maiorVal){
        printf("%d ", tA[2]);
    }
    if (pTA[3]>maiorVal){
        printf("%d ", tA[3]);
    }
    if (pTA[4]>maiorVal){
        printf("%d ", tA[4]);
    }
    if (pTA[5]>maiorVal){
        printf("%d ", tA[5]);
    }
    if (pTA[6]>maiorVal){
        printf("%d ", tA[6]);
    }
    if (pTA[7]>maiorVal){
        printf("%d ", tA[7]);
    }
    if (pTA[8]>maiorVal){
       printf("%d ", tA[8]);
    }
    if (pTA[9]>maiorVal){
        printf("%d ", tA[9]);
    }
        
    }
    printf("\n");

    if (pTB[0]<menorVal){
        contImpB++;
    }
    if (pTB[1]<menorVal){
        contImpB++;
    }
    if (pTB[2]<menorVal){
        contImpB++;
    }
    if (pTB[3]<menorVal){
        contImpA++;
    }
    if (pTB[4]<menorVal){
        contImpB++;
    }
    if (pTB[5]<menorVal){
        contImpB++;
    }
    if (pTB[6]<menorVal){
        contImpB++;
    }
    if (pTB[7]<menorVal){
        contImpB++;
    }
    if (pTB[8]<menorVal){
        contImpB++;
    }
    if (pTB[9]<menorVal){
        contImpB++;
    }

    if (contImpB==0){
        printf("B: sem impedimentos");
    }else{
        printf("B: ");

    if (pTB[0]<menorVal){
        printf("%d ", tB[0]);
    }
    if (pTB[1]<menorVal){
       printf("%d ", tB[1]);
    }
    if (pTB[2]<menorVal){
        printf("%d ", tB[2]);
    }
    if (pTB[3]<menorVal){
        printf("%d ", tB[3]);
    }
    if (pTB[4]<menorVal){
        printf("%d ", tB[4]);
    }
    if (pTB[5]<menorVal){
        printf("%d ", tB[5]);
    }
    if (pTB[6]<menorVal){
        printf("%d ", tB[6]);
    }
    if (pTB[7]<menorVal){
        printf("%d ", tB[7]);
    }
    if (pTB[8]<menorVal){
       printf("%d ", tB[8]);
    }
    if (pTB[9]<menorVal){
        printf("%d ", tB[9]);
    }
        
    }

    
}
int main(){
    int *timeA=malloc(10*sizeof(int));
    int *timeB=malloc(10*sizeof(int));

    float *posicoesA=malloc(10*sizeof(float));
    float *posicoesB=malloc(10*sizeof(float));

    leituraInt(timeA);
    leituraInt(timeB);

    leituraFl(posicoesA);
    leituraFl(posicoesB);

    verificaImpedidos(timeA, timeB, posicoesA, posicoesB);

    free(timeA);
    free(timeB);
    free(posicoesA);
    free(posicoesB);
    return 0;
}