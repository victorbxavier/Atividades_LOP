#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
typedef struct{
    int armadura;
    int escudo;
    int canhao;
    int missil;
}nave;

int main(){
    setlocale(LC_ALL, "");

    int R=0, cont=0;//R=Rodadas
    nave E, K; // E=Nave Enterprise, K=Nave Klingon
    char letra1, letra2;

    scanf("%d\n", &R);
    scanf("%d %d %d %d\n", &E.armadura, &E.escudo, &E.canhao, &E.missil);
    scanf("%d %d %d %d\n", &K.armadura, &K.escudo, &K.canhao, &K.missil);

    while(cont<R){

        scanf("%c ", &letra1);
        scanf("%c ", &letra2);
        
        if (letra1=='E' && letra2=='C'){
            if (E.canhao==0){
                printf("Canhão sem munição!");
            }else{

                 E.canhao=E.canhao-1;

                if (K.escudo >0){

                if (K.escudo >=10){
                    K.escudo= K.escudo-10;
                }else{
                    K.escudo= K.escudo-10;
                    K.armadura= K.armadura + K.escudo;
                    K.escudo=0;
                }

                }else if(K.armadura>0){
                    K.armadura= K.armadura-10;
                }
            
            }
        }


        if (letra1=='E' && letra2=='M'){
             if (E.missil==0){
                 printf("Míssil sem munição!\n");
            }else if(K.armadura>0){

                E.missil=E.missil-1;
                K.armadura= K.armadura-20;
    
             }
        }

        if (K.armadura<=0){
            printf("Enterprise vence!");
            break;
        }
        
        if (letra1=='K' && letra2=='M'){
             if (K.missil==0){
                printf("Míssil sem munição!\n");
            }else if(E.armadura>0){

                K.missil=K.missil-1;
                E.armadura= E.armadura-20;
    
            }
        }

        if (letra1=='K' && letra2=='C'){
            if (K.canhao==0){
        printf("Canhão sem munição!\n");
    }else{

        K.canhao=K.canhao-1;

        if (E.escudo >0){

            if (E.escudo >=10){
                E.escudo= E.escudo-10;
            }else{
                E.escudo= E.escudo-10;
                E.armadura= E.armadura + E.escudo;
                E.escudo=0;
            }

        }else if(E.armadura>0){
            E.armadura= E.armadura-10;
        }
    
    }
        }

        if (E.armadura<=0){
            printf("Klingons vencem!");
            break;
        }

        cont++;
    }

    if (E.armadura>0 && K.armadura>0){
        printf("Empate!");
    }
    
    return 0;
}