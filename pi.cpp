#include <stdio.h>
int main(){
    double pi4=0.0;
    for (double i=1;;i+=4){
        if(1.0/i<0.00000001) break;
        pi4+=1.0/i;
        pi4-=1.0/(i+2.0);
    }
    printf("%.8f\n",4*pi4);
    return 0;
}