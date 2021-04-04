#include <stdio.h>
int num = 0;
int checkHarshad(int n){
    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;
    return (n % sum == 0);
}
int main(){
scanf("%d",&num);
do{
}while(!checkHarshad(num++));
printf("%d\n",num-1);
return 0;
}
