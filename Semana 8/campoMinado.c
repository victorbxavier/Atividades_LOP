/*#include<stdio.h>
void imprimirCampo(int linhas, int colunas, char matrix[linhas][colunas]){//Usar ponteiro aparentemente

    for (int ti = 0; ti < linhas; ti++){
        for (int tj = 0; tj < colunas; tj++){
            printf("%c", matrix[ti][tj]);
        }
        printf("\n");
    }

}

char *montaMatriz(int linhas, int colunas, char matrix[linhas][colunas]){

    for (int ti = 0; ti < linhas; ti++){
        for (int tj = 0; tj < colunas; tj++){
            printf("%c", matrix[ti][tj]);
        }
        printf("\n");
    }

    return &matrix[0][0];
}
void campoMinado(){

}
int main(){
    
    int N,M;//Tamanho do campo
    int B, i, j;// Qtd de bombas no mapa

    scanf("%d %d", &N, &M);
    scanf("%d", &B);

    int vetorLinha[B], vetorColuna[B];
    char matriz[N][M];

    //Inicializando a matriz
    for (int mi = 0; mi < N; mi++){
        for (int mj = 0; mj < M; mj++){
            matriz[mi][mj]='*';
        }
    }

    //Preenchendo os vetores com as posições das bombas, conjuntamente mostrando a posição de cada uma
    // E colocando na matriz como B cada posição
    for (i = 0; i < B; i++){
        scanf("%d %d\n", &vetorLinha[i], &vetorColuna[i]);
        matriz[vetorLinha[i]-1][vetorColuna[i]-1]='B';
    }

    scanf("%d", &j);//Numero de jogadas

    char **matriz2;
    matriz2=malloc(sizeof(char*)*N);
    for (int a = 0; a < N; a++){
        matriz2[a]=malloc(sizeof(char*)*M);
    }
    
    matriz2=montaMatriz(N, M,&matriz[0][0]);
    for (int ti = 0; ti < N; ti++){
        for(int tj=0; tj<M; tj++){
            printf("%c", (*(matriz2+ti)+tj));
        }
        printf("\n");
    }

    free(matriz2);
    return 0;
}*/