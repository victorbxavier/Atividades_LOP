#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char keyWord[20];
    char palavra[50];
    //char strings[8][50];
    char aux[50];
    char *pont;
    int cont=0, contPalavra=0;    
    fgets(keyWord,20, stdin);
    fflush(stdin);
    while(scanf(" %s", palavra) != EOF){

        pont=strstr(palavra, keyWord);
        if ( pont !=NULL ){            
            //strcpy(strings[cont++], palavra);
            printf("%s\n", palavra);
            //contPalavra++;
        }
        
    }

   /* for (int i = 0; i < contPalavra; i++){
        for (int j = i+1; j < contPalavra; j++){

            if ( strcmp(strings[i],strings[j])>0 ){
                strcpy(aux,strings[i]);
                strcpy(strings[i],strings[j]);
                strcpy(strings[j],aux);
            }
            
        }
        
    }*/
    return 0;
}