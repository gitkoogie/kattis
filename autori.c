#include <stdio.h>
#include <string.h>

int strlengt(const char*);

int main() {
    char input[100];
    int ret = 0;
    char output[50];
    ret = scanf("%s",input);

    int len = strlengt(input);
    int chars = 0;
    int i = 0;
    while(1){
        if(i == 0){
            output[i] = input[i];
            printf("%c",input[i]);
        }
        if(input[i] == '-'){
            printf("%c",input[i+1]);
        }
        i++;
        if(i==len+1){break;}
        
    }
    
    return 0;
}
int strlengt(const char *input){
    return (int)strlen(input);
}