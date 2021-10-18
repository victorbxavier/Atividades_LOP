#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int eFloat(char vetor1[]){
    int cont=0;
    char ponto='.';
    for (int pos = 0; pos < 50; pos++){
        if (vetor1[pos]==ponto){
            cont++;
            break;
        }
    }

    return cont;
}

int *fromJsonString_int(int *tam, char vetor2[]){
    char *formatar=strtok(formatar, ",");
    int cont=0;
    while (vetor2[cont]!='\0'){
        *tam++;
    }
    char *formatar2=atoi(*formatar);
    return formatar2;
}

double *fromJsonString_double(int *tam, char vetor3[]){
    char *formatar=strtok(formatar, ",");
    int cont=0;
    while (vetor3[cont]!='\0'){
        *tam++;
    }
    double formatar2=atof(*formatar);
    return formatar2;
}

int main(){
    int nString=0;
    int tam=0;
    int intDouble=0;
    scanf("%d%*c", &nString);

    char linha[200];
    char **vetores=malloc(sizeof(char*)*nString);
    for (int i = 0; i < nString; i++){
        vetores[i]=malloc(sizeof(char)  * 1293213);
    }
    

    for (int j = 0; j < nString; j++){
        fgets(linha, 200, stdin);

        intDouble= eFloat(linha);

        if (strcmp(linha, '[]')){
            *vetores[j]="vetor vazio";
            continue;
        }
        if (intDouble==1){
            sprintf(linha, "%d", fromJsonString_double(tam, linha));
            *vetores[j]= linha;
            
        }else{
            sprintf(linha, "%d", fromJsonString_int(tam, linha));
            *vetores[j]= linha;
        }
        
    }
    


    free(vetores);
    return 0;
}