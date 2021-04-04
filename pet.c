#include <stdio.h>
#include <math.h>


int main() {
    int rety=0;
    int res1=0,res2=0,res3=0,res4=0,res5=0;
    int array1[4];
    int array2[4];
    int array3[4];
    int array4[4];
    int array5[4];
    int result=0;
    int winner=0;
    
    for(int i=0;i<4;i++){
        rety = scanf("%i",&array1[i]);
    }
    res1 = array1[0]+array1[1]+array1[2]+array1[3];
    for(int i=0;i<4;i++){
        rety = scanf("%i",&array2[i]);
    }
    res2 = array2[0]+array2[1]+array2[2]+array2[3];
    for(int i=0;i<4;i++){
        rety = scanf("%i",&array3[i]);
    }
    res3 = array3[0]+array3[1]+array3[2]+array3[3];
    for(int i=0;i<4;i++){
        rety = scanf("%i",&array4[i]);
    }
    res4 = array4[0]+array4[1]+array4[2]+array4[3];
    for(int i=0;i<4;i++){
        rety = scanf("%i",&array5[i]);
    }
    res5 = array5[0]+array5[1]+array5[2]+array5[3];
    
    if(res1>res2){
        result = res1;
        winner = 1;
    }else{
        result = res2;
        winner = 2;
    }
    if(res3>result){
        result = res3;
        winner = 3;
    }else if(res4>result){
        result = res4;
        winner = 4;
    }else{
        if(res5>result){
            result = res5;
            winner = 5;
        }
    }
    printf("%i %i\n",winner,result);
        return 0;
}