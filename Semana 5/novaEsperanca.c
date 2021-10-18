//Cifra de Vigerenere
#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char S[]={'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};
     
int main(int argc, char *argv[]){

    char C[200], K[200];
    char P[200];

    fgets(K, 200, stdin);

    K[strlen(K)-1]='\0';
    getchar();
    fflush(stdin);
    fflush(stdout);

    scanf("%[^\n]", P);

    P[strlen(P)-1]='\0';
    
    printf("%d\n %s", strlen(P), P);
    //Problemas com a leitura da string P, não sei como e nem porque está dando certo :(
    int e_num=0;

    for (int i = 0; K[i] != '\0'; i++){
        if (isdigit(K[i])==0){
            e_num++;
        }
    }

    if ((strlen(K)< 4) || (strlen(K)>4) || (e_num>=1)){
        printf("Chave invalida!");
    }
    

    int carValido=0;
    for (int i = 0; P[i] !='\0'; i++){
        carValido=0;
        for (int j = 0; S[j] !='\0'; j++){
            if (P[i]!=S[j]){
               carValido++; 
            } 
        }
        if (carValido==40){
            printf("Caractere invalido na entrada!");
        }
    }

    return 0;
}