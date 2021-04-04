#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    double h = 0;
    double v = 0;
    int ladderHeight = 0;
    int ret = 0;
    
    ret = scanf("%lf %lf",&h,&v);
    
    v = (v*PI)/180;
    ladderHeight = h/sin(v);
    
    
    printf("%d\n",ladderHeight+1);
    
        return 0;
}