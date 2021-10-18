#include<stdio.h>
//Este código não executou no LOP
int main(){
    int s,n=0;
    scanf("%i%i",&s,&n);
    int vet[s];

    int i=0;
    for (i = 0; i < s; i++){
        vet[i]=i;
    }

    for (i = 0; i < n; i++){

        int num=0;
        scanf("%i", &num);
        int vet2[num];

        int j=0;
        for (j = 0; j < num; j++){
            scanf("%i",&vet2[j]);
        }

        for (j = 0; j < s; j++){

            int k=0;

            for (k = 0; k < num; i++){
                if (vet2[k]==vet[j]){
                    vet[j]=-1;
                }
            }   
        }  
    }
    int cont=0;
    for (i = 0; i < s; i++){
        if (vet[i]!=-1){
            cont++;
        }
    }
    int vet3[cont];
    int j=0;
    for (i = 0; i < s; i++){
        if (vet[i]!=-1){
            vet3[j]=vet[i];
            j++;
        }
        
    }
    printf("[");
    for (i = 0; i < cont; i++){
        if (i!=cont-1){
            printf("%i,",&vet3[i]);
        }else{
            printf("%i", &vet3[i]);
        }  
    }
    printf("]");
    return 0;
}