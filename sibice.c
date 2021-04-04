#include <stdio.h>
#include <math.h>


int main() {
    int NumberOfMatches,wide,height = 0;
    int retx,rety = 0;
    int hypo = 0;
    
    retx = scanf("%i %i %i",&NumberOfMatches,&wide,&height);
    
    int lenghtOfMatches[NumberOfMatches];
    hypo = sqrt((wide*wide)+(height*height));
                
    for(int i=0;i<NumberOfMatches;i++){
        rety = scanf("%i",&lenghtOfMatches[i]);
    }
    for(int j=0;j<NumberOfMatches;j++){
        if(lenghtOfMatches[j] <= hypo){
            printf("DA\n");
        }else{
            printf("NE\n");
        }
    }
    
    return 0;
}