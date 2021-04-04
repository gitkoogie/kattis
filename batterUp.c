#include <stdio.h>

int main() {
    double NumAtBats = 0;
    int ret = 0;
    double strikePts = 0;
    double strikes = 0;
    double currentStrike = 0;
    ret = scanf("%lf",&NumAtBats);
    
    for(int i=0;i<NumAtBats;i++){
        ret = scanf("%lf",&currentStrike);
        
        if(currentStrike != -1){
            strikePts = strikePts + currentStrike;
            strikes++;
        }
    }
    strikePts = strikePts/strikes;
    printf("%.16f\n",strikePts);
        return 0;
}