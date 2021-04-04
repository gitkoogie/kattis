#include <stdio.h>

int main(int argc, const char * argv[]) {
    // IMPLEMENT VARIABLES AND INPUT
        int diceNr1 = 0, diceNr2 = 0, p1 = 0, p2 = 2, countForOutput = 0;
        int arrayAmountOfSumResult[41];
        int arrayBiggestProbability[41];
   // printf("Please input size of dice N and M: ");
        scanf("%d %d",&diceNr1,&diceNr2);
        int arrayResultForSums[diceNr2*diceNr1];
    
    // RESET ARRAYS
    for (int i = 0; i < 41; i++) {
        arrayAmountOfSumResult[i] = 0;
    }
    for (int i = 0; i < 41; i++) {
        arrayBiggestProbability[i] = 0;
    }
    
    // CALCULATE RESULTS
    if (diceNr1 > 3 && diceNr1 < 21) {
        if (diceNr2 > 3 && diceNr2 < 21) {
            
            for (int j = 1;j < diceNr1 + 1 ; j++) {
                for (int i = 1; i < diceNr2 + 1; i++) {
                    arrayResultForSums[p1] = j + i;
                    p1++;
                }
            }
            /*
            // PRINT SUMS
            for (int i=0; i < diceNr1 * diceNr2; i++) {
                //printf("Sum %i is: %d \n",i,arrayResultForSums[i]);
            }
             */
            // Put amount of same sums in array with position representing sum value
            for (int i = 0; i < (diceNr1 * diceNr2); i++) {
                for (int j=0; j < 40; j++) {
                    
                    if (arrayResultForSums[i] == j) {
                        arrayAmountOfSumResult[j] = arrayAmountOfSumResult[j] + 1;
                    }
                }
            }
            /*
            // print amount of sums for dice rolls
            for (int j=0; j<41; j++) {
                //printf("Amount of %d in dice rolls is: %d\n",j,arrayAmountOfSumResult[j]);
            }
            */
            // CALCULATE THE MOST OCCURENT SUM
            for (int j=0; j<41; j++) {
                
                if (arrayAmountOfSumResult[j] > arrayBiggestProbability[1] ) {
                    //printf("Found a larger probability for %d \n",j);
                    // Clear previous result
                    for (int i = 0; i < 41; i++) {
                        arrayBiggestProbability[i] = 0;
                    }
                    
                    arrayBiggestProbability[0] = j;
                    arrayBiggestProbability[1] = arrayAmountOfSumResult[j];
                    
                    p2 = 2;
                    
                    
                }else if(arrayAmountOfSumResult[j] == arrayBiggestProbability[1]){
                    
                   // printf("Found an equal probability for %d \n",j);
                    arrayBiggestProbability[p2] = j;
                    arrayBiggestProbability[p2 + 1] = arrayAmountOfSumResult[j];
                    p2 = p2 + 2;
                }
            }
            
            // Print result
            while (arrayBiggestProbability[countForOutput] != 0) {
                printf("%d \n",arrayBiggestProbability[countForOutput]);
                countForOutput = countForOutput + 2;
            }
            
            
            
        }else{
            // OUTPUT ERROR IF INPUT IS OUTSIDE RANGE
            printf("Wrong size of input M");
        }
    }else {
        // OUTPUT ERROR IF INPUT IS OUTSIDE RANGE
        printf("Wrong size of input N");
    }
    
    return 0;
}