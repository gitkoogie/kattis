#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    double numPub=0,factor=0;
    double scientists=0;
    double newFactor=0,ret=0;
    int result = 0;
    
    ret = scanf("%lf %lf",&numPub,&factor);
    
    scientists = factor*numPub;
    newFactor = factor;
    
    while(newFactor>factor-1){
        newFactor = scientists/numPub;
        scientists--;
    }
    result = scientists+2;
    printf("%i\n",result);
        return 0;
}