#include<stdio.h>
int main(){
    int hrs, mins;
    scanf("%i:%i", &hrs, &mins);
    if (hrs>12 || hrs==12 && mins!=0){
        /* code */
        printf("Hora de acordar...");
    }else
    {
        printf("Cedo demais!");
    }
    
}