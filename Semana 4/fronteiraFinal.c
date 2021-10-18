#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int hostil(int lin, int col, char **matriz){
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           if (matriz[i][j]=='X'){
               return 1;
           }
        }
    }
    return 0;
}
int planetaM(int lin, int col, char **matriz){
    int qtdVal=lin*col;
    int contAg=0, contFlo=0;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           if (matriz[i][j]=='~'){
               contAg++;
           }
           if (matriz[i][j]=='*'){
               contFlo++;
           }
        }
    }
    if ((contAg>=(qtdVal/2))&&(contFlo>=(qtdVal/5))){
        return 1;
    }else{
        return 0;
    }
}
int planetaAqua(int lin, int col, char **matriz){
    int qtdVal=lin*col;
    int contAg=0;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           if (matriz[i][j]=='~'){
               contAg++;
           }
        }
    }
    if (contAg>=(qtdVal*0.85)){
        return 1;
    }else{
        return 0;
    }
}
int planetaDes(int lin, int col, char **matriz){
    int qtdVal=lin*col;
    int contDes=0;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           if (matriz[i][j]=='^'){
               contDes++;
           }
        }
    }
    if (contDes>=(qtdVal*0.6)){
        return 1;
    }else{
        return 0;
    }
}
int planetaSel(int lin, int col, char **matriz){
    int qtdVal=lin*col;
    int contSel=0;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           if (matriz[i][j]=='*'){
               contSel++;
           }
        }
    }
    if (contSel>=(qtdVal*0.65)){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int M=0, N=0;
    setlocale (LC_ALL, "");
    scanf("%d %d", &M, &N);

    char **mat=(char **)malloc(M*sizeof(char *));

    for (int i = 0; i < M; i++){
        mat[i]=(char *)malloc(N*sizeof(char));
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            scanf(" %c", &mat[i][j]);
        }
        
    }
    if (hostil(M,N, mat)){
        printf("Planeta Hostil");
    }else if(planetaM(M,N, mat)){
        printf("Planeta Classe M");
    }else if (planetaAqua(M,N, mat)){
        printf("Planeta Aquático");
    }else if (planetaDes(N,M, mat)){
        printf("Planeta Desértico");
    }else if (planetaSel(N,M, mat)){
        printf("Planeta Selvagem");
    }else{
        printf("Planeta Inóspito");
    }
    
    
    
    

    free(mat);
    return 0;
}