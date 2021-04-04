#include <stdio.h>
#include <math.h>


int main() {
    int x=0;
    int y=0;
    int n=0;
    int ret=0;
    
    ret = scanf("%i %i %i",&x,&y,&n);
    
    for(int i=1;i<=n;i++){
        if(i%x==0 && i%y!=0){
            printf("Fizz\n");
        }
        else if(i%y==0 && i%x!=0){
            printf("Buzz\n");
        }
        else if(i%x==0 && i%y==0){
            printf("FizzBuzz\n");
        }else{
            printf("%i\n",i);
        }
        
    }
        return 0;
}