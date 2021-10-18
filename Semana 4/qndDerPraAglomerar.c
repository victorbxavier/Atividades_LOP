#include<stdio.h>
int unique(int n, int values[], int uniqueValues[]){

    int cont=0;
    for(int i=0; i < n; i++){
        int j;

        for(j=0; j < cont; j++){
            if(values[i]==uniqueValues[j]){
                break;
            }
        }

        if(j==cont){
            uniqueValues[cont]=values[i];
            cont++;
        }
    }

    for(int i = 0; i < cont; i++){
        printf("%d ", uniqueValues[i]);
     }
    return cont;
}
int main(){

    int num=0, g=0;

    scanf("%d",&num);
    int valores[11]={0};
    int valoresUnicos[11]={0};

    for(int i = 0; i < num; i++){
        scanf("%d",&valores[i]);   
    }


    g=unique(num,valores,valoresUnicos);
    return 0;
}