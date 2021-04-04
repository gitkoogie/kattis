#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char **argv){

    int cases;
    double seconds;
    int beats;
    
    scanf("%d",&cases);
    
    while(cases){
        scanf("%d %lf",&beats, &seconds);
        
        double ans = (60 * beats) / seconds;
        double var = 60 / seconds;
        
        printf("%.4f %.4f %.4f\n",ans-var,ans,ans+var);
        cases--;
    }
    return 0;
}