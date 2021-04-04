#include <stdio.h>
#include <math.h>


int main() {
    int numLaw=0;
    double seedCost=0;
    int ret=0;
    double totCost=0;
    
    ret=scanf("%lf",&seedCost);
    ret=scanf("%i",&numLaw);
    double squareMeters[numLaw];
    
    
    for(int i=0;i<numLaw;i++){
        double width=0;
        double length=0;
        
        ret=scanf("%lf %lf",&width,&length);
        squareMeters[i] = width * length;
    }
    for(int j=0;j<numLaw;j++){
        totCost = totCost + (seedCost * squareMeters[j]);
    }
    
    printf("%8.7f\n",totCost);
        return 0;
}