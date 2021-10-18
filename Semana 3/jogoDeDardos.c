#include <stdio.h>
#include<math.h>

double distanGeom(double x1, double y1, double x2, double y2){
    return sqrt(pow( (x1-x2), 2) + pow( (y1-y2), 2));
}

int pontuacao(double disteucl){
    int pont=0; 
    if (disteucl>=0 && disteucl<=1){
            pont+=10;
        }
    if (disteucl>1 && disteucl<=2){
            pont+=6;
    }
    if (disteucl>2 && disteucl<=3){
            pont+=4;
    }
    return pont;   
}
int main(){
    double x1=0,y1=0, aux1=0, aux2=0, distgeom=0, distgeom2=10;
    int i, pont=0;
    for (i = 0; i < 10; i++){
        scanf("%lf %lf", &x1, &y1);
        distgeom=distanGeom(x1, y1, 0, 0);
        if(i>0){
            distgeom2=distanGeom(x1, y1, aux1, aux2);
        }
        aux1=x1;
        aux2=y1;
        pont+=pontuacao(distgeom)+pontuacao(distgeom2)/2;
    }
    printf("%i", pont);
    return 0;    
}