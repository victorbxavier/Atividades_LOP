#include<stdio.h>
#include<math.h>
int potencia2(int n){

    if ((n==0) || (n%2!=0)){
        return 0;
    }else if (ceil(log2(n)) == floor(log2(n))){
        return 1;
    }else{
        return 0;
    }
    
}
int expoenteBin(int q, int cont){
    return q==1? cont : expoenteBin(q/2, ++cont);

}
int problemaJosefo(int n2){

    int ePotenciaDois= potencia2(n2); //Variavel que recebe o valor se o numero é uma potência de dois ou não
    int expoenteNum= expoenteBin(n2, 0); //Maior expoente do numero
    
    int restoSoma= n2-pow(2, expoenteNum);//Numero fora da potencia de dois

    if ((n2==1) || (ePotenciaDois==1)){
        return 1;
    }else{
        return (2*restoSoma)+1;//Formula
    }
    
    
}
int main(){ 
    int leitura=0, result=0;

    scanf("%d", &leitura);

    result=problemaJosefo(leitura);

    printf("%d", result);
    return 0;
}