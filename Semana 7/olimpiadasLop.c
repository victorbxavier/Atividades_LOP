#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
typedef struct{
    char nome[50];
    char textoNotas[10][200];
    float notas[10];
    float total;
}juiz;

int main(){
    setlocale(LC_ALL,"");

    int N=0,M=0,E=0, posDesMenor=0, posDesMaior=0; //N=Qtd de juizes, M=Qtd de manobras, E= manobra
    juiz juizes[10];
    float descarteMenor=100, descarteMaior=0;

    scanf("%d %d\n", &N, &M);
    
    for (size_t i = 0; i < N; i++){

        fgets(juizes[i].nome, 50, stdin);

        for (size_t j = 0; j < M; j++){
            scanf("%f ", &juizes[i].notas[j]);
            juizes[i].total=juizes[i].total+juizes[i].notas[j];
            fgets(juizes[i].textoNotas[j], 200, stdin);
        }
        
        if (juizes[i].total>descarteMaior){
            descarteMaior=juizes[i].total;
            posDesMaior=i;
        }

        if (juizes[i].total<descarteMenor){
            descarteMenor=juizes[i].total;
            posDesMenor=i;
        }
        
        
    }

    scanf("%d", &E);

    juizes[1].nome[strlen(juizes[1].nome)-1]='\0';

    for (size_t l = 0; l < N; l++){ 
        juizes[l].nome[strlen(juizes[l].nome)-1]='\0';

        printf("%s - ", juizes[l].nome);

        if(l==posDesMaior){
            printf("Descartado: maior nota");
        }else if(l==posDesMenor){
            printf("Descartado: menor nota");
        }else{
            juizes[l].textoNotas[E-1][strlen(juizes[l].textoNotas[E-1])-1]='\0';
            printf("%0.1f %s", juizes[l].notas[E-1], juizes[l].textoNotas[E-1]);
        }
        printf("\n");
        
        
    }
    
    

    return 0;
}