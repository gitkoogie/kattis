#include <stdio.h>

int main() {
    int x,y = 0;
    int retx,rety = 0;

    retx =  scanf("%i",&x);
    rety =  scanf("%i",&y);
    if(x<-1000 || x>1000 || x==0){return 1;};
    if(y<-1000 || y>1000 || y==0){return 1;};
    
    if(x>0 && y>0){
        printf("1\n");
    }else if(x<0 && y>0){
        printf("2\n");
    }else if(x<0 && y<0){
        printf("3\n");
    }else{
        printf("4\n");
    }
    
    return 0;
}