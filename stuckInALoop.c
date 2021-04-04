#include <stdio.h>

int main() {
    int GivenNumber = 0;
    int ret = 0;
    ret =  scanf("%i",&GivenNumber);
    int countUp = 1;
    while(countUp <= GivenNumber){
        printf("%i Abracadabra\n",countUp);
        countUp++;
    }
    
    return 0;
}