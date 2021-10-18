#include<stdio.h>
#include<string.h>
int main(){

    char A[40], B[40], C[80];
    int cont1=0, cont2=0, j=0;

    
    fgets(A, 40, stdin);
    fgets(B, 40, stdin);

    A[strlen(A)-1]='\0';
    B[strlen(B)-1]='\0';

    for (int i = 0; i < strlen(A)+strlen(B); i+=1){
        if(A[cont1]){
            C[j]=A[cont1];
            j+=1;
            cont1+=1;
        }
        if (B[cont2]){
            C[j]=B[cont2];
            j+=1;
            cont2+=1;
        }
    }
    
    C[j] = 0;
    printf("%s",C);
    return 0;
}