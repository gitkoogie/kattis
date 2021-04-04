#include <stdio.h>

int main() {
    int R1,S = 0;
    int ret = 0;

    ret =  scanf("%i %i",&R1,&S);
    if(R1<-1000 || R1>1000){return 1;};
    if(S<-1000 || S>1000){return 1;};
    
    int R2 = 0;
    
    R2 = (S*2)-R1;
    printf("%i\n",R2);
    
    return 0;
}