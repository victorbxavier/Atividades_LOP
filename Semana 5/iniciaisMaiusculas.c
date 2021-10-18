#include<stdio.h>
#include<string.h>
int main(){
    char frase[60];
	int i;
    fgets(frase, 60, stdin);

	for(i=0; frase[i]!='\0'; i++){
		
		if(i==0){
			if((frase[i]>='a' && frase[i]<='z'))
				frase[i]=frase[i]-32;
			continue;
		}
		if(frase[i]==' '){
			++i;
			if(frase[i]>='a' && frase[i]<='z'){
				frase[i]=frase[i]-32;
				continue;
			}
		}
		else{
			if(frase[i]>='A' && frase[i]<='Z')
				frase[i]=frase[i]+32;
		}
	}

    printf(frase);
    return 0;
}