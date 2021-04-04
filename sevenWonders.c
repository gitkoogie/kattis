#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    char input[50];
    int ret = 0;
    char currentLetter = 0;
    int numT=0,numC=0,numG=0,total = 0;
    ret = scanf("%s",input);
    int len = (int)strlen(input);
    
    for(int i=0;i<len;i++){
        currentLetter = input[i];
        
        if(currentLetter == 'T'){
            numT = numT+1;
        }else if(currentLetter == 'C'){
            numC = numC+1;
        }else{
            numG = numG+1;
        }
    }
    total = (numT*numT)+(numC*numC)+(numG*numG);
    
    int hold = 0;
    if(numT>0 && numC>0 && numG>0){
        if(numT==numC && numC==numG){
            total = total+(numT*7);
        }else{
            hold = numT;
            while(hold>numC || hold>numG){
                if(hold>numC){
                hold = numC;
                }else if(hold>numG){
                    hold = numG;
                }
                }
            total = total +(hold*7);
        }
    }
    printf("%i\n",total);
    
    return 0;
}