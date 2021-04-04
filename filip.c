#include <stdio.h>
#include <math.h>

int reverse(int NumToReverse);

int main() {
    int x=0;
    int y=0;
    int ret=0;
    int reversedX,reversedY;
    ret = scanf("%i %i",&x,&y);
    
    reversedX = reverse(x);
    reversedY = reverse(y);
    
    if(reversedY>reversedX){
        printf("%i\n",reversedY);
    }else{
        printf("%i\n",reversedX);
    }
        return 0;
}

int reverse(int NumToReverse){
    int reversedNum=0;
    int hundred=0;
    int tenth=0;
    int one=0;
    
    one = NumToReverse % 10;
    tenth = ((NumToReverse % 100)-one)/10;
    hundred = (NumToReverse - tenth)/100;
    
    reversedNum = one * 100;
    reversedNum = reversedNum + (tenth * 10);
    reversedNum = reversedNum + hundred;
    
    return reversedNum;
}