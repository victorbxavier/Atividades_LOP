#include<stdio.h>
#include<stdlib.h>
int main(){
    int M=0, N=0, L=0;
    scanf("%d %d %d", &M, &N, &L);

    int **mat=(int **)malloc(M*sizeof(int *));
    for (int i = 0; i < M; i++){
        mat[i]=(int *)malloc(N*sizeof(int));
    }
    

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            scanf(" %d", &mat[i][j]);
        }
        
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (mat[i][j]>=L){
                mat[i][j]=1;
            }else{
                mat[i][j]=0;
            }
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    free(mat);
    return 0;
}