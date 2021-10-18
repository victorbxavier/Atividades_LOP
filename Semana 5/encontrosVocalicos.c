#include<stdio.h>
#include<string.h>
int main(){
    //char frase[100];
    char palavra[100];
    int cont=0;

    /*fgets(frase, 250, stdin);
    palavra=strtok(frase, " .?");*/
    while(scanf(" %s", palavra) != EOF){
        if( (strstr(palavra,"ae")!=NULL) || (strstr(palavra,"Ae")!=NULL) || (strstr(palavra,"aE")!=NULL)
        || (strstr(palavra,"AE")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ai")!=NULL) || (strstr(palavra,"Ai")!=NULL) || (strstr(palavra,"aI")!=NULL)
        || (strstr(palavra,"AI")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ao")!=NULL) || (strstr(palavra,"Ao")!=NULL) || (strstr(palavra,"aO")!=NULL)
        || (strstr(palavra,"AO")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"au")!=NULL) || (strstr(palavra,"Au")!=NULL) || (strstr(palavra,"aU")!=NULL)
        || (strstr(palavra,"AU")!=NULL) ){
            printf("%s\n", palavra);
            cont++;

        }else if( (strstr(palavra,"ea")!=NULL) || (strstr(palavra,"Ea")!=NULL) || (strstr(palavra,"eA")!=NULL)
        || (strstr(palavra,"EA")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ei")!=NULL) || (strstr(palavra,"Ei")!=NULL) || (strstr(palavra,"eI")!=NULL)
        || (strstr(palavra,"EI")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"eo")!=NULL) || (strstr(palavra,"Eo")!=NULL) || (strstr(palavra,"eO")!=NULL)
        || (strstr(palavra,"EO")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"eu")!=NULL) || (strstr(palavra,"Eu")!=NULL) || (strstr(palavra,"eU")!=NULL)
        || (strstr(palavra,"EU")!=NULL) ){
            printf("%s\n", palavra);
            cont++;

        }else if( (strstr(palavra,"ia")!=NULL) || (strstr(palavra,"Ia")!=NULL) || (strstr(palavra,"iA")!=NULL)
        || (strstr(palavra,"IA")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ie")!=NULL) || (strstr(palavra,"Ie")!=NULL) || (strstr(palavra,"iE")!=NULL)
        || (strstr(palavra,"IE")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"io")!=NULL) || (strstr(palavra,"Io")!=NULL) || (strstr(palavra,"iO")!=NULL)
        || (strstr(palavra,"IO")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"iu")!=NULL) || (strstr(palavra,"Iu")!=NULL) || (strstr(palavra,"iU")!=NULL)
        || (strstr(palavra,"IU")!=NULL) ){
            printf("%s\n", palavra);
            cont++;

        }else if( (strstr(palavra,"oa")!=NULL) || (strstr(palavra,"Oa")!=NULL) || (strstr(palavra,"oA")!=NULL)
        || (strstr(palavra,"OA")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"oe")!=NULL) || (strstr(palavra,"Oe")!=NULL) || (strstr(palavra,"oE")!=NULL)
        || (strstr(palavra,"OE")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"oi")!=NULL) || (strstr(palavra,"Oi")!=NULL) || (strstr(palavra,"oI")!=NULL)
        || (strstr(palavra,"OI")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ou")!=NULL) || (strstr(palavra,"Ou")!=NULL) || (strstr(palavra,"oU")!=NULL)
        || (strstr(palavra,"OU")!=NULL) ){
            printf("%s\n", palavra);
            cont++;

        }else if( (strstr(palavra,"ua")!=NULL) || (strstr(palavra,"Ua")!=NULL) || (strstr(palavra,"uA")!=NULL)
        || (strstr(palavra,"UA")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ue")!=NULL) || (strstr(palavra,"Ue")!=NULL) || (strstr(palavra,"uE")!=NULL)
        || (strstr(palavra,"UE")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"ui")!=NULL) || (strstr(palavra,"Ui")!=NULL) || (strstr(palavra,"uI")!=NULL)
        || (strstr(palavra,"UI")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }else if( (strstr(palavra,"uo")!=NULL) || (strstr(palavra,"Uo")!=NULL) || (strstr(palavra,"uO")!=NULL)
        || (strstr(palavra,"UO")!=NULL) ){
            printf("%s\n", palavra);
            cont++;
        }

    }

    printf("Total de encontros: %d",cont);
    return 0;
}