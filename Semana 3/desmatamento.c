#include<stdio.h>

int verificaInter(int x0func1, int y0func1, int x1func1, int y1func1, int x0func2, int y0func2, 
int x1func2, int y1func2){
    
   if (x0func1 > x1func2 || x0func2 > x1func1)
      return 0;
   if (y0func1 > y1func2 || y0func2 > y1func1)
      return 0;

   return 1;

}
int main(){
    int vetADesmat[4];
    int vetAComp[4];
    int linhas=0,n1=0,n2=0,n3=0,n4=0, desmatado=0;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    vetADesmat[0]=n1;
    vetADesmat[1]=n2;
    vetADesmat[2]=n3;
    vetADesmat[3]=n4;
    scanf("%d",&linhas);

    for(int i=0;i<linhas;i++){
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        vetAComp[0]=n1;
        vetAComp[1]=n2;
        vetAComp[2]=n3;
        vetAComp[3]=n4;
        desmatado=verificaInter(vetADesmat[0],vetADesmat[1],vetADesmat[2],vetADesmat[3], 
        vetAComp[0],vetAComp[1],vetAComp[2], vetAComp[3]);
        if(desmatado==1)
         break;
    }
    printf("%d",desmatado);
    return 0;
}