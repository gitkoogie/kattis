#include <stdio.h>

int main() {
    int TimeInMinute,Hour,Minute = 0;
    int ret = 0;
    int NewHour,NewMinute = 0;

    ret =  scanf("%i %i",&Hour,&Minute);
    
    TimeInMinute = (Hour*60)+Minute;
    TimeInMinute = TimeInMinute-45;
    if(TimeInMinute < 0){
        TimeInMinute = (24*60+Minute)-45;
    }
    
    NewHour = TimeInMinute / 60;
    NewMinute = TimeInMinute % 60;
    
    
    printf("%i %i\n",NewHour,NewMinute);
    
    return 0;
}