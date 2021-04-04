#include <stdio.h>

int main() {
    int ret,rety,numTemp = 0;
    int tempUnderZero = 0;
    int temp = 0;

    ret = scanf("%i",&numTemp);
    while(numTemp>0){
        rety = scanf("%i",&temp);
        if(temp<0){
            tempUnderZero++;
        }
        numTemp--;
    }
    printf("%i\n",tempUnderZero);
    
    return 0;
}