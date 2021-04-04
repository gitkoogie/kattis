#include <stdio.h>
#include <math.h>


int main() {
    int num=0,rety=0,retx=0;
    int result=0,power=0,numToPow=0;
    
    rety = scanf("%i",&num);
    int numArray[num];
    for(int i=0;i<num;i++){
        retx = scanf("%i",&numArray[i]);
        
    }
    for(int j=0;j<num;j++){
        power = numArray[j] % 1000;
        power = power % 100;
        power = power % 10;
        numToPow = numArray[j]/10;
        result = result + pow(numToPow,power);
    }
    printf("%i\n",result);
        return 0;
}