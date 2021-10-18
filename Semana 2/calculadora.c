#include<stdio.h>
#include<math.h>
int main(){
    char sinal;
    float n1, n2;
    int n3;
    while (sinal!='e')
    {
        /* code */
        scanf("%s\n", &sinal);
        scanf("%f %f\n", &n1, &n2);
        n3= (int) n2;
        switch (sinal)
        {
             case '+':
        /* code */
                printf("%.2f0+%.2f0=%.2f0\n", n1, n2, n1+n2);
                break;
            case '-':
                printf("%.2f0-%.2f0=%.2f0\n", n1, n2, n1-n2);
                break;
            case '*':
                printf("%.2f0*%.2f0=%.2f0\n", n1, n2, n1*n2);
                 break;
            case '/':
                printf("%.2f0/%.2f0=%.2f0\n", n1, n2, n1/n2);
                break;
            case '^':
                printf("%.2f0^%i=%.2f0\n", n1, n3, pow(n1,n3));
                break;
        }
        if (sinal=='e')
        {
            break;
        }
    }
}