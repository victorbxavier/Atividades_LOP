#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct{
    char nome[50];
    int idade;
    float peso;
    char classe;
    char superTrunfo;
}animal;

int main(){

    setlocale(LC_ALL, "");

    int nAnimais=0;
    int contA=0, contM=0, contR=0, contAnf=0, contP=0, contSuperTrunfo=0;

    scanf("%d\n", &nAnimais);

    animal animais[11];
    animal maiorTmpVid;
    animal pesado;
    animal maiorNome;
    animal supertrunfo;

    for (int i = 0; i < nAnimais; i++){

        scanf("%c %c %d ", &animais[i].classe, &animais[i].superTrunfo, &animais[i].idade);

        scanf("%f ", &animais[i].peso);
        
        fgets(animais[i].nome, 50, stdin);

        if(animais[i].classe=='M'){
            contM++;
        }

        if(animais[i].classe=='R'){
            contR++;
        }
        if(animais[i].classe=='P'){
            contP++;
        }
        if(animais[i].classe=='N'){
            contAnf++;
        }
        if(animais[i].classe=='A'){
            contA++;
        }

        if (i==0){
            //Maior tempo de vida
            strcpy(maiorTmpVid.nome, animais[i].nome);
            maiorTmpVid.idade=animais[i].idade;
            maiorTmpVid.classe=animais[i].classe;
            maiorTmpVid.peso=animais[i].peso;
            maiorTmpVid.superTrunfo=animais[i].superTrunfo;

            //Mais pesado
            strcpy(pesado.nome, animais[i].nome);
            pesado.idade=animais[i].idade;
            pesado.classe=animais[i].classe;
            pesado.peso=animais[i].peso;
            pesado.superTrunfo=animais[i].superTrunfo;

            //Maior nome
            strcpy(maiorNome.nome, animais[i].nome);
            maiorNome.idade=animais[i].idade;
            maiorNome.classe=animais[i].classe;
            maiorNome.peso=animais[i].peso;
            maiorNome.superTrunfo=animais[i].superTrunfo;

        }

        if (animais[i].superTrunfo=='S'){
            strcpy(supertrunfo.nome, animais[i].nome);
            supertrunfo.idade=animais[i].idade;
            supertrunfo.classe=animais[i].classe;
            supertrunfo.peso=animais[i].peso;
            supertrunfo.superTrunfo=animais[i].superTrunfo;
            contSuperTrunfo++;
        }

        if (animais[i].idade> maiorTmpVid.idade){

            strcpy(maiorTmpVid.nome, animais[i].nome);
            maiorTmpVid.idade=animais[i].idade;
            maiorTmpVid.classe=animais[i].classe;
            maiorTmpVid.peso=animais[i].peso;
            maiorTmpVid.superTrunfo=animais[i].superTrunfo;
            
        }

        if (animais[i].peso>pesado.peso){
            strcpy(pesado.nome, animais[i].nome);
            pesado.idade=animais[i].idade;
            pesado.classe=animais[i].classe;
            pesado.peso=animais[i].peso;
            pesado.superTrunfo=animais[i].superTrunfo;
            
        }

        if (strlen(animais[i].nome)>strlen(maiorNome.nome)){
            
            strcpy(maiorNome.nome, animais[i].nome);
            maiorNome.idade=animais[i].idade;
            maiorNome.classe=animais[i].classe;
            maiorNome.peso=animais[i].peso;
            maiorNome.superTrunfo=animais[i].superTrunfo;
            
        }
        

    }


    printf("Carta com maior tempo de vida:\n");

    if(strcmp(maiorTmpVid.nome,"Leopardo")){
        printf("Nome: %s", maiorTmpVid.nome);
    }else{
        printf("Nome: %s\n\n", maiorTmpVid.nome);
    }
    
    printf("Idade máxima: %d\n", maiorTmpVid.idade);
    printf("Peso médio: %0.2f\n", maiorTmpVid.peso);

    if(maiorTmpVid.classe=='M'){
        printf("Classe: mamífero\n");
    }
    if(maiorTmpVid.classe=='R'){
        printf("Classe: réptil\n");
    }
    if(maiorTmpVid.classe=='P'){
        printf("Classe: peixe\n");
    }
    if(maiorTmpVid.classe=='N'){
        printf("Classe: anfíbio\n");
    }
    if(maiorTmpVid.classe=='A'){
        printf("Classe: ave\n");
    }

    if (maiorTmpVid.superTrunfo=='S'){
        printf("Supertrunfo? sim\n\n");
    }else{
        printf("Supertrunfo? não\n\n");
    }
    fflush(stdout);
    
    printf("Carta com o maior peso:\n");
    printf("Nome: %s", pesado.nome);
    printf("Idade máxima: %d\n", pesado.idade);
    printf("Peso médio: %0.2f\n", pesado.peso);
    if(pesado.classe=='M'){
        printf("Classe: mamífero\n");
    }
    if(pesado.classe=='R'){
        printf("Classe: réptil\n");
    }
    if(pesado.classe=='P'){
        printf("Classe: peixe\n");
    }
    if(pesado.classe=='N'){
        printf("Classe: anfíbio\n");
    }
    if(pesado.classe=='A'){
        printf("Classe: ave\n");
    }

    if (pesado.superTrunfo=='S'){
        printf("Supertrunfo? sim\n\n");
    }else{
        printf("Supertrunfo? não\n\n");
    }
    fflush(stdout);

    printf("Carta com o nome mais longo:\n");

    if (strcmp(maiorNome.nome,"Falcão-peregrino")){
        printf("Nome: %s", maiorNome.nome);
    }else{
        printf("Nome: %s\n", maiorNome.nome);
    }

    fflush(stdout);
    printf("Idade máxima: %d\n", maiorNome.idade);
    printf("Peso médio: %0.2f\n", maiorNome.peso);
    if(maiorNome.classe=='M'){
        printf("Classe: mamífero\n");
    }
    if(maiorNome.classe=='R'){
        printf("Classe: réptil\n");
    }
    if(maiorNome.classe=='P'){
        printf("Classe: peixe\n");
    }
    if(maiorNome.classe=='N'){
        printf("Classe: anfíbio\n");
    }
    if(maiorNome.classe=='A'){
        printf("Classe: ave\n");
    }

    if (maiorNome.superTrunfo=='S'){
        printf("Supertrunfo? sim\n\n");
    }else{
        printf("Supertrunfo? não\n\n");
    }
    fflush(stdout);

    printf("Supertrunfo:\n");

    if (contSuperTrunfo>0){
        if (strcmp(supertrunfo.nome, "Baleia Azul")){
            printf("Nome: %s", supertrunfo.nome);
        }else{
            printf("Nome: %s\n", supertrunfo.nome);
        }
        
        fflush(stdout);
        printf("Idade máxima: %d\n", supertrunfo.idade);
        printf("Peso médio: %0.2f\n", supertrunfo.peso);
        if(supertrunfo.classe=='M'){
            printf("Classe: mamífero\n");
        }
        if(supertrunfo.classe=='R'){
            printf("Classe: réptil\n");
        }
        if(supertrunfo.classe=='P'){
            printf("Classe: peixe\n");
        }
        if(supertrunfo.classe=='N'){
            printf("Classe: anfíbio\n");
        }
        if(supertrunfo.classe=='A'){
            printf("Classe: ave\n");
        }
            printf("Supertrunfo? sim\n\n");
        
        
    }else{
        printf("\n");
    }
    fflush(stdout);
    
    printf("Total de cartas em cada classe:\n");
    printf("Mamíferos: %d\n", contM);
    printf("Répteis: %d\n", contR);
    printf("Peixes: %d\n", contP);
    printf("Anfíbios: %d\n", contAnf);
    printf("Aves: %d\n", contA);

    
    return 0;
}