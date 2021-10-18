#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brasil");
    int numjog=0, vidadra=0, cont=0, ata=0, morte=0;
    char letra, ultGolpe;

    scanf("%i %i\n", &numjog, &vidadra);
    while (cont<numjog){

        scanf("%s %i\n", &letra, &ata);

        if (ata>14){
            if (letra=='A'){
                vidadra-=10;
                if (vidadra<=0 && morte==0)
                {
                    ultGolpe= 'A';
                    morte=1;
                }
            }else if (letra=='I'){
                vidadra-=10;
                if (vidadra<=0 && morte==0)
                {
                    ultGolpe= 'I';
                    morte=1;
                }
            }else if (letra=='R')
            {
                vidadra-=6;
                if (vidadra<=0 && morte==0)
                {
                    ultGolpe= 'R';
                    morte=1;
                }
            }else if (letra=='W')
            {
                /* code */
                vidadra-=8;
                if (vidadra<=0 && morte==0)
                {
                    ultGolpe= 'W';
                    morte=1;
                }
            }else if (letra=='S')
            {
                /* code */
                vidadra-=4;
                if (vidadra<=0 && morte==0)
                {
                    ultGolpe= 'S';
                    morte=1;
                }
            }else if (letra=='C')
            {
                /* code */
                vidadra-=1;
                if (vidadra<=0 && morte==0)
                {
                    ultGolpe= 'C';
                    morte=1;
                }
            }            
        }   
        cont++;
    }
    if (vidadra>0){
        /* code */
        printf("Casa caiu!");
    }else{
        if (ultGolpe=='A')
        {
            /* code */
            printf("Alyson derrotou o dragão!");
        }else if (ultGolpe=='I')
        {
            /* code */
            printf("Isaac derrotou o dragão!");
        }else if (ultGolpe=='R')
        {
            /* code */
            printf("Rafaela derrotou o dragão!");
        }else if (ultGolpe=='W')
        {
            /* code */
            printf("Wellington derrotou o dragão!");
        }else if (ultGolpe=='S')
        {
            /* code */
            printf("Salgado derrotou o dragão!");
        }else if (ultGolpe=='C'){
            /* code */
            printf("Careca derrotou o dragão!");
        }
    } 
}