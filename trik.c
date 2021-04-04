#include <stdio.h>
int main(){
    int ret = 0;
    char BallSwaps[50];
    ret = scanf("%s",BallSwaps);
    char x[3] = {1,0,0};
    
    for(int i=0;i<50;i++){
        int hold = 0;
        if(BallSwaps[i] == 'a' || BallSwaps[i] == 'A'){
            hold = x[1];
            x[1] = x[0];
            x[0] = hold;
        }
        if(BallSwaps[i] == 'b' || BallSwaps[i] == 'B'){
            hold = x[2];
            x[2] = x[1];
            x[1] = hold;
        }
        if(BallSwaps[i] == 'c' || BallSwaps[i] == 'C'){
            hold = x[2];
            x[2] = x[0];
            x[0] = hold;
        }
    }
    for(int j=0;j<3;j++){
        if(x[j]==1){
            printf("%i\n",j+1);
        }
    }
    return 0;
}