#include <stdio.h>

int main() {
    
    int x_array[4];
    int y_array[4];
    int odd_one_x = 0;
    int odd_one_y = 0;
    int odd_one_x_num = 0;
    int odd_one_y_num = 0;
    
    for(int i = 0; i < 3;i++){
        int ret = scanf("%d %d",&x_array[i],&y_array[i]);
    }
    
    for(int j = 1; j < 3;j++){
        if(x_array[0] != x_array[j]){
            odd_one_x += 1;
            odd_one_x_num = j;
        }
        if(y_array[0] != y_array[j]){
            odd_one_y += 1;
            odd_one_y_num = j;
        }
    }
    
    if(odd_one_x == 1 && odd_one_x_num == 1){
        x_array[3] = x_array[1];
    }else if(odd_one_x == 2 && odd_one_x_num == 2){
        x_array[3] = x_array[0];
    }else{
        x_array[3] = x_array[2];
    }
    
    if(odd_one_y == 1 && odd_one_y_num == 1){
        y_array[3] = y_array[1];
    }else if(odd_one_y == 2 && odd_one_y_num == 2){
        y_array[3] = y_array[0];
    }else{
        y_array[3] = y_array[2];
    }
    
    printf("%d %d",x_array[3],y_array[3]);
    return 0;
}