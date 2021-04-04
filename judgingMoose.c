#include <stdio.h>

int main() {
    int ret,left,right = 0;
    
    ret = scanf("%i %i",&left,&right);
    
    int result = 0;
    if(left>right){
        result = left*2;
        printf("Odd %i\n",result);
    }else if(left<right){
        result = right*2;
        printf("Odd %i\n",result);
    }else if(right == left && left != 0){
        result = right*2;
        printf("Even %i\n",result);
    }else{
        printf("Not a moose\n");
    }
    
    
    return 0;
}