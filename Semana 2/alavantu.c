#include<stdio.h>
int main(){
    char entrada=' ';
    int b=0,c=0,m=0,p=0,q=0; //Qtds b-bolo de milho, c-canjica, m-milho assado, p-pamonha, q-pe de moleque

    while (entrada!='F'){

        entrada=' ';

        scanf("%c ", &entrada);

        switch (entrada){
            
        case 'B':
            b++;
            break;
        case 'C':
            c++;
            break;
        case 'M':
            m++;
            break;
        case 'P':
            p++;
            break;
        case 'Q':
            q++;
            break;
        }
    }
    printf("Bolo: %d\nCanjica: %d\nMilho: %d\nPamonha: %d\nPé de Moleque: %d",b,c,m,p,q);
    return 0;
}