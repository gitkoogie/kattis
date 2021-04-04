#include <stdio.h>

int main() {
    int speed = 0;
    int totTime = 0;
    int currentTime = 0;
    int input = 0;
    int go = 1;
    int totMile = 0;
    int lastTime = 0;
    while(go){
        scanf("%d",&input);
        
        if(input == -1){
            break;
        }
        
        for(int i=0;i<input;i++){
            scanf("%d %d",&speed,&totTime);
            currentTime = totTime - lastTime;
            
            totMile = totMile + (speed*currentTime);
            lastTime = totTime;
        }
        printf("%d miles\n",totMile);
        totMile = 0;
        currentTime = 0;
        lastTime = 0;
    }
    
        return 0;
}