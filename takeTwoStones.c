#include <stdio.h>

int main() {
    int NumberOfStones;
    int ret = 0;
    scanf("%d",&NumberOfStones);
    while(NumberOfStones){
        if(NumberOfStones == 1){
            ret = 1;
            break;
        }
        if(NumberOfStones == 2){
            ret = 2;
            break;
        }
        NumberOfStones = NumberOfStones-2;
    }
    if(ret == 1){
        printf("Alice");
    }
    if(ret == 2){
        printf("Bob");
    }
return 0;
}