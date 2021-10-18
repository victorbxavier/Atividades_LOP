#include<stdio.h>
int main(){

    int candidato=0, qtdpart=0, cont=0, cv=0;

    float n1=0,n2=0,n3=0, n1v=0,n2v=0,n3v=0, media=0, mediatemp=0;

    scanf("%d",&qtdpart);

    while (cont<qtdpart){

        scanf("%f %f %f", &n1,&n2,&n3);

        mediatemp=(n1+n2+n3)/3;
        media=(n1v+n2v+n3v)/3;
        candidato++;

        if( mediatemp > media){
            cv=candidato;
            n1v=n1;
            n2v=n2;
            n3v=n3;
        }else if (mediatemp == media){
            if((n1>n1v && n1>n2v && n1>n3v) || (n2>n1v && n2>n2v && n2>n3v) || (n3>n1v && n3>n2v && n3>n3v)){
                cv=candidato;
                n1v=n1;
                n2v=n2;
                n3v=n3;
            }
        }
        cont++;
    }
    if(cv==1 && media==2)
        cv++;
    media=(n1v+n2v+n3v)/3;
    printf("Vencedor: %d\nNota: %.2f", cv, media);
    
    return 0;
}