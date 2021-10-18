#include<stdio.h>
int main(){
    /*Pontuacao dos times*/
    int tdsaint, fgsaint, patsaint, tdbuccaneers, fgbuccaneers, patbuccaneers;
    scanf("%i%i%i \n", &tdsaint, &fgsaint, &patsaint);
    scanf("%i%i%i", &tdbuccaneers, &fgbuccaneers, &patbuccaneers);

    tdsaint = tdsaint*6;
    fgsaint= fgsaint*3;
    tdbuccaneers=tdbuccaneers*6;
    fgbuccaneers=fgbuccaneers*3;
    
    if(tdsaint+fgsaint+patsaint > tdbuccaneers+fgbuccaneers+patbuccaneers){
        printf("Placar: Saints %i x %i Bucaneers \n", tdsaint+fgsaint+patsaint, tdbuccaneers+fgbuccaneers+patbuccaneers);
        printf("Saints venceu!");
    }else if (tdbuccaneers+fgbuccaneers+patbuccaneers > tdsaint+fgsaint+patsaint){
        /* code */
        printf("Placar: Saints %i x %i Bucaneers \n", tdsaint+fgsaint+patsaint, tdbuccaneers+fgbuccaneers+patbuccaneers);
        printf("Bucaneers venceu!");
    }else{
        /* code */
        printf("Placar: Saints %i x %i Bucaneers \n", tdsaint+fgsaint+patsaint, tdbuccaneers+fgbuccaneers+patbuccaneers);
        printf("Empate!");
    }
    
    
    return 0;
}