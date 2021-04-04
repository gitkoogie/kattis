#include <stdio.h>

int main() {
    int correctFormation[6] = {1,1,2,2,2,8};
    int inFo[6];
    int outputFormation[6];
    int ret = 0;
    
    ret = scanf("%i %i %i %i %i %i",&inFo[0],&inFo[1],&inFo[2],&inFo[3],&inFo[4],&inFo[5]);
    
    for(int i=0;i<6;i++){
        if(correctFormation[i] == inFo[i]){
            outputFormation[i] = 0;
        }else{
            outputFormation[i] = correctFormation[i]-inFo[i];
        }
    }
    for(int j=0;j<6;j++){
        printf("%i ",outputFormation[j]);
    }
    return 0;
}