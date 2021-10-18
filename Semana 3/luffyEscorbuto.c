#include<stdio.h>
int valVit(int qtd, char com){
    int mg=0;
    switch (com)
    {
    case 'S':
        /* code */
        mg= qtd*120;
        break;
    case 'O':
        /* code */
        mg= qtd*60;
        break;
    case 'M':
        /* code */
        mg= qtd*85;
        break;
    case 'G':
        /* code */
        mg= qtd*74;
        break;
    case 'N':
        /* code */
        mg= qtd*56;
        break;
    case 'L':
        /* code */
        mg= qtd*50;
        break;
    case 'B':
        /* code */
        mg= qtd*34;
        break;
    }

    return mg;

}
int main(){

    int vitamina[5];
    int C=1,Q=0,cont=0,cont2=0;
    int acm=0;
    char S;

    while (1){
        /* code */
        scanf("%d",&C);
        if(C==0)
            break;

        while (cont<C){

            scanf("%d %c",&Q, &S);
            acm+= valVit(Q,S);
            Q=0;
            cont++;
        }

        vitamina[cont2]=acm;
        acm=0;
        cont=0;
        cont2++;
    }

    while (cont<cont2){

        if(vitamina[cont]!=0){
            if(vitamina[cont]>=110 && vitamina[cont]<=130){
                printf("%d mg\n",vitamina[cont]);
            }
            if(vitamina[cont]<110){
                int falta=110-vitamina[cont];
                printf("Mais %d mg\n", falta);
            }
            if(vitamina[cont]>130){
                int excesso=vitamina[cont]-130;
                printf("Menos %d mg\n", excesso);
            }
        }

        cont++;
    }
    
    return 0;
}