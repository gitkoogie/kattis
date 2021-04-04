#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    int num=0,rety=0,retx=0,result=0;
    
    rety = scanf("%i",&num);
    int cases[num];
    for(int j=0;j<num;j++){
        retx = scanf("%i",&cases[j]);
    }
    for(int i=0;i<num;i++){
        result = cases[i]%2;
        if(result!=0){
        printf("%i is odd\n",cases[i]);
    }else{
        printf("%i is even\n",cases[i]);
    }
    }
        return 0;
}