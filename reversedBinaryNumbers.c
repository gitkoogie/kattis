#include <stdio.h>

int main() {
    int res = 0;
    int num = 0;
    int ret = scanf("%d",&num);
    
    while(num>0){
        res = res << 1;
        res = res | (num & 1);
        num = num >> 1;
     
    }
    printf("%d\n",res);
    
    
    return 0;
}