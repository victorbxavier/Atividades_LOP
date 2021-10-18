#include<stdio.h>
int main(){
    float temp;
    char escala;
    scanf("%f %s", &temp, &escala); /*N tem como arredondar a entrada apenas a saida*/
    switch (escala)
    {
    case 'C'/* constant-expression */:
        /* code */
        printf("Celsius: %.2f \n", temp);
        printf("Farenheit: %.2f \n", temp*1.8+32);
        printf("Kelvin: %.2f", temp+273.15);
        break;
    case 'F':
        printf("Celsius: %.2f \n", (temp-32)/1.8);
        printf("Farenheit: %.2f \n", temp);
        printf("Kelvin: %.2f", ((temp-32)/1.8)+273.15);
        break;
    case 'K':
        printf("Celsius: %.2f \n", temp-273.15);
        printf("Farenheit: %.2f \n", (temp-273.15)*1.8+32);
        printf("Kelvin: %.2f", temp);
        break;
    }
}