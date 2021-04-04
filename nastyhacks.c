#include <stdio.h>
#include <string.h>


int main() {
    int num = 0;
    int retx,rety = 0;
    int input[300];
    retx = scanf("%i",&num);
    for(int i=0;i<num*3;i++){
        rety = scanf("%i",&input[i]);
    }
    for(int j=0;j<num*3;j=j+3){
        if(input[j] > (input[j+1]-input[j+2])){
            printf("do not advertise\n");
        }else if(input[j] < (input[j+1]-input[j+2])){
            printf("advertise\n");
        }else{
            printf("does not matter\n");
        }
    }

    return 0;
}