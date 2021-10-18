#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *str;
    int capacity;
    int length;
} string;

void set_str(string *endGreeting, char palavra[]){//Tinha esquecido de colocar colchete
    endGreeting->length= strlen(palavra);
    endGreeting->capacity=((endGreeting->length/16)+1)*16;
    endGreeting->str=malloc(sizeof(char)*endGreeting->capacity);
    endGreeting->str=strcpy(endGreeting->str, palavra);
    
}

void read_str(string *nome){
    char aux[300];
    scanf("%[^\n]s", aux);
    set_str(nome, aux);//Tinha colocado &(endereco de), antes de nome, mas tava errado pois nome já é um endereco
    // e quando usado vira a variavel dnv
}

void concat_str(string *str1, string *str2){
    str1->length=str1->length+str2->length;

    str1->capacity=((str1->length/16)+1)*16;

    str1->str=realloc(str1->str, sizeof(char)*str1->capacity);

    str1->str=strcat(str1->str, str2->str);
}

void clear_str(string *nome){
    free(nome->str);
}

int main(){

    string greeting;
    string name;
    set_str(&greeting, "Oi ");
    read_str(&name);
    concat_str(&greeting, &name);
    printf("%s\n", greeting.str);
    printf("%i %i\n", greeting.capacity, greeting.length);
    clear_str(&greeting);
    clear_str(&name);
    return 0;

}