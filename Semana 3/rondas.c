#include<stdio.h>
void hTela(int hr, int min, int sec){

    if (sec>59){
        sec-=60;
        min+=1;
    }
    if (min>59){
        min-=60;
        hr+=1;
    }
    if (hr>23){
        hr-=24;
    }

    if (hr<10){
        if (min<10){
            if (sec<10){
                printf("0%i:0%i:0%i\n", hr, min, sec);
            }else{
                printf("0%i:0%i:%i\n", hr, min, sec);
            } 
        }else{
            if (sec<10){
                printf("0%i:%i:0%i\n", hr, min, sec);
            }else{
                printf("0%i:%i:%i\n", hr, min, sec);
            }
        }
    }else{
        if (min<10){
            if (sec<10){
                printf("%i:0%i:0%i\n", hr, min, sec);
            }else{
                printf("%i:0%i:%i\n", hr, min, sec);
            } 
        }else{
            if (sec<10){
                printf("%i:%i:0%i\n", hr, min, sec);
            }else{
                printf("%i:%i:%i\n", hr, min, sec);
            }
        }
    }
}
int main(){
    int hr, min, sec;
    scanf("%i %i %i", &hr, &min, &sec);
    hTela(hr+1, min, sec);
    hTela(hr+2, min+10, sec+30);
    hTela(hr+4, min+40, sec+50);
    hTela(hr+12, min+5, sec+5);
    return 0;
}