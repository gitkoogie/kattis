#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char **argv){

    int gold,silver,copper;
    
    scanf("%d %d %d",&gold,&silver,&copper);
    
    gold = gold * 3;
    silver = silver * 2;
    copper = copper * 1;
    int total = gold + silver + copper;
    
    switch(total){
        case 0 ... 1: 
            printf("Copper\n");
            break;
            
            case  2:
            printf("Estate or Copper\n");
            break;
            
            case 3 ... 4: 
            printf("Estate or Silver\n");
            break;
            
            case 5:
            printf("Duchy or Silver\n");
            break;
            
                case 6 ... 7:
            printf("Duchy or Gold\n");
            break;
            
        case  8 ... 15: 
            printf("Province or Gold\n");
            break;
            
            default :
            break;
    }
    
    
    return 0;
}