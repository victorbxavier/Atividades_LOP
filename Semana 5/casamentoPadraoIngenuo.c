#include<stdio.h>
#include<string.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    char genoma[51];
    char padrao[5];
    int contAchei=0;
    int c1=0,c2=1,c3=2,c4=3;
    fgets(genoma, 51, stdin);
    fgets(padrao, 5, stdin);

    while (c4<strlen(genoma)-1){

        if (genoma[c1]=='A'){
            
            if ( genoma[c1]==padrao[0] && genoma[c2]==padrao[1] && genoma[c3]==padrao[2] && genoma[c4]==padrao[3] ){
                printf("%c %c %c %c sim\nAchei o padrão no índice %d", genoma[c1],genoma[c2], genoma[c3],genoma[c4],c1);
                contAchei++;
                break;
            }else if(genoma[c1]=='A' && genoma[c2]!='A' && genoma[c3]!='A'){
                printf("%c %c não\n", genoma[c1], genoma[c2]);
            }else{
                printf("%c %c %c %c não\n", genoma[c1], genoma[c2], genoma[c3], genoma[c4]);
            }
            

        }else{
            printf("%c não\n", genoma[c1]);
        }
        c1++;
        c2++;
        c3++;
        c4++;
    }
    if (contAchei==0){
        printf("Não achei o padrão");
    }
    
    
    return 0;
}