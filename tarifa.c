#include <stdio.h>
#include <string.h>


int main() {
    int dataPerMonth,months = 0;
    int retx,rety,retz = 0;
    
    retx = scanf("%i",&dataPerMonth);
    rety = scanf("%i",&months);
    
    int input[months];
    int output = 0;
    output = dataPerMonth;
    
    for(int i=0;i<months;i++){
        retz = scanf("%i",&input[i]);
    }
    for(int j=0;j<months;j++){
        output = output + (dataPerMonth-input[j]);
    }
    printf("%i\n",output);
    
    return 0;
}