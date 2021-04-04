#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    int done = 0;
    scanf("%d %d %d",&x,&y,&z);
    
    
    while(done!=1){
        if(x+y == z){
            printf("%d+%d=%d",x,y,z);
            done++;
        }else if(x-y == z){
            printf("%d-%d=%d",x,y,z);
            done++;
        }else if(x/y == z){
            printf("%d/%d=%d",x,y,z);
            done++;
        }else if(x*y == z){
            printf("%d*%d=%d",x,y,z);
            done++;
        }else if(x == y+z){
            printf("%d=%d+%d",x,y,z);
            done++;
        }else if(x == y-z){
            printf("%d=%d-%d",x,y,z);
            done++;
        }else if(x == y/z){
            printf("%d=%d/%d",x,y,z);
            done++;
        }else if(x == y*z){
            printf("%d=%d*%d",x,y,z);
            done++;
        }
        
        
    }
    
    
    
    
    return 0;
}