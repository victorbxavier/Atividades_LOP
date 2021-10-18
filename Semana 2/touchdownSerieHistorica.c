#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brasil");

    int tdstemp=0, fgstemp=0, patstemp=0, tdbtemp=0, fgbtemp=0, patbtemp=0;
    int jogos=0, tds=0, fgs=0, pats=0, tdb=0, fgb=0, patb=0;
    int cont=0;
    scanf("%i", &jogos);

    while (cont < jogos){
        /* code */
        scanf("%i %i %i", &tdstemp, &fgstemp, &patstemp);
        scanf("%i %i %i", &tdbtemp, &fgbtemp, &patbtemp);

        tds=tds+tdstemp;
        fgs=fgs+fgstemp;
        pats=pats+patstemp;
        tdb=tdb+tdbtemp;
        fgb=fgb+fgbtemp;
        patb=patb+patbtemp;

        cont++;
    }
    
    
    if ((6*tds)+(3*fgs)+pats > (6*tdb)+(3*fgb)+patb){
        /* code */
        printf("Saints é o campeão na série histórica! \n");
        printf("Placar: %i x %i \n", (6*tds)+(3*fgs)+pats, (6*tdb)+(3*fgb)+patb);


        if (tds > tdb)
        {
            /* code */
            printf("Saints marcou mais Touch Downs(%i) \n", tds);
        }else if (tdb> tds)
        {
            /* code */
            printf("Bucaneers marcou mais Touch Downs(%i) \n", tdb);
        }else
        {
            /* code */
            printf("Número de Touch Downs empatado(%i) \n", tds);
        }

        
        if (fgs > fgb)
        {
            /* code */
            printf("Saints marcou mais Field Goals(%i) \n", fgs);
        }else if (fgb> fgs)
        {
            /* code */
            printf("Bucaneers marcou mais Field Goals(%i) \n", fgb);
        }else
        {
            /* code */
            printf("Número de Field Goals empatado(%i) \n", fgs);
        }


        if (pats > patb)
        {
            /* code */
        printf("Saints marcou mais Pontos Extras(%i) \n", pats);
        }else if (patb> pats)
        {
            /* code */
            printf("Bucaneers marcou mais Pontos Extras(%i) \n", patb);
        }else
        {
            /* code */
            printf("Número de Pontos Extras empatado(%i) \n", pats);
        }
    }
    
    
    else if ((6*tdb)+(3*fgb)+(patb) > (6*tds)+(3*fgs)+pats){
        /* code */
        printf("Bucaneers é o campeão na série histórica! \n");
        printf("Placar: %i x %i \n", (6*tdb)+(3*fgb)+patb, (6*tds)+(3*fgs)+pats);

        if (tds > tdb)
        {
            /* code */
            printf("Saints marcou mais Touch Downs(%i) \n", tds);
        }else if (tdb> tds)
        {
            /* code */
            printf("Bucaneers marcou mais Touch Downs(%i) \n", tdb);
        }else
        {
            /* code */
            printf("Número de Touch Downs empatado(%i) \n", tds);
        }

        if (fgs > fgb)
        {
            /* code */
            printf("Saints marcou mais Field Goals(%i) \n", fgs);
        }else if (fgb> fgs)
        {
            /* code */
            printf("Bucaneers marcou mais Field Goals(%i) \n", fgb);
        }else
        {
            /* code */
            printf("Número de Field Goals empatado(%i) \n", fgs);
        }


        if (pats > patb)
        {
            /* code */
        printf("Saints marcou mais Pontos Extras(%i) \n", pats);
        }else if (patb> pats)
        {
            /* code */
            printf("Bucaneers marcou mais Pontos Extras(%i) \n", patb);
        }else
        {
            /* code */
            printf("Número de Pontos Extras empatado(%i) \n", pats);
        }

    }
    
    
    else
    {
        /* code */
        printf("Série histórica empatada em %i pontos!\n", (6*tdb)+(3*fgb)+(patb));


        if (tds > tdb)
        {
            /* code */
            printf("Saints marcou mais Touch Downs(%i)\n", tds);
        }else if (tdb > tds)
        {
            /* code */
            printf("Bucaneers marcou mais Touch Downs(%i)\n", tdb);
        }else
        {
            /* code */
            printf("Número de Touch Downs empatado(%i)\n", tds);
        }

         if (fgs > fgb)
        {
            /* code */
            printf("Saints marcou mais Field Goals(%i)\n", fgs);
        }else if (fgb> fgs)
        {
            /* code */
            printf("Bucaneers marcou mais Field Goals(%i)\n", fgb);
        }else
        {
            /* code */
            printf("Número de Field Goals empatado(%i)\n", fgs);
        }


        if (pats > patb)
        {
            /* code */
        printf("Saints marcou mais Pontos Extras(%i) \n", pats);
        }else if (patb > pats)
        {
            /* code */
            printf("Bucaneers marcou mais Pontos Extras(%i) \n", patb);
        }else
        {
            /* code */
            printf("Número de Pontos Extras empatado(%i) \n", pats);
        }

    }
    
    
    
    
    
}