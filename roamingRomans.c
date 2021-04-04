#include <stdio.h>

int main(int argc, const char * argv[]) {
    char input_stream[30];
    int flag = 0;
    
    scanf("%s",input_stream);
    
    for (int i = 0; i < 30; i++) {
        
        if (input_stream[i] == 's' && input_stream[i+1] == 's' && flag != 1) {
            printf("hiss\n");
            flag = 1;
        }
    }
    
    if (flag == 0) {
        printf("no hiss\n");
    }
    
    
    return 0;
}