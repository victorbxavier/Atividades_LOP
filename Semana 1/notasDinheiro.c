#include<stdio.h>
int main(){
    int dinheiro, nota100, nota50, nota20, nota10, nota5, nota2, moeda;
    int rest100, rest50, rest20, rest10, rest5, rest2;
    scanf("%i", &dinheiro);
    nota100=dinheiro/100;
    rest100=dinheiro%100;

    nota50=rest100/50;
    rest50=rest100%50;

    nota20=rest50/20;
    rest20=rest50%20;

    nota10=rest20/10;
    rest10=rest20%10;

    nota5=rest10/5;
    rest5=rest10%5;
    
    nota2=rest5/2;
    rest2=rest5%2;

    moeda=rest2/1;
    if (nota100!=0)
    {
        /* code */
        printf("%i nota(s) de 100 \n", nota100);
    }
    if (nota50!=0)
    {
        /* code */
        printf("%i nota(s) de 50 \n", nota50);
    }
    if (nota20!=0)
    {
        /* code */
        printf("%i nota(s) de 20 \n", nota20);
    }
    if (nota10!=0)
    {
        /* code */
        printf("%i nota(s) de 10 \n", nota10);
    }
    if (nota5!=0)
    {
        /* code */
        printf("%i nota(s) de 5 \n", nota5);
    }
    if (nota2!=0)
    {
        /* code */
        printf("%i nota(s) de 2 \n", nota2);
    }
    if (moeda!=0)
    {
        /* code */
        printf("%i moeda(s) de 1", moeda);
    }
    
    
}