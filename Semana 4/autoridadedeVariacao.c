#include<stdio.h>
#include<stdlib.h>
void leitura(int num, int *pont){

    for (int i = 0; i < num; i++){
        scanf("%d ", &pont[i]);
    }

}

void sort(int *ptr, int tam){
    int i,j,c;
    for(i=1;i<tam;i++){

     for (j=0;j<tam-1;j++){

        if (ptr[j] > ptr[j+1]){
            
            c=ptr[j];
            ptr[j]=ptr[j+1];
            ptr[j+1]=c;
          }
      }
   }
}

int main(){
    int x=0,y=0,z=0,j=0;
    int *vet1;
    int *vet2;
    int *vet3;

    scanf("%d %d", &x, &y);

    z=x+y;

    vet1=malloc(x*sizeof(int));
    vet2=malloc(y*sizeof(int));
    vet3=malloc(z*sizeof(int));

    leitura(x, vet1);
    leitura(y, vet2);

    for (int i = 0; i < x; i++){
        vet3[j]=vet1[i];
        j++;
    }
    for (int i = 0; i < y; i++){
        vet3[j]=vet2[i];
        j++;
    }

    sort(vet3, z);

    for (int i = 0; i < z; i++){
        printf("%d ", vet3[i]);
    }

    free(vet1);
    free(vet2);
    free(vet3);
    return 0;
}