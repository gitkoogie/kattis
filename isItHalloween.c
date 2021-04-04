#include <stdio.h>
#include <string.h>

int date;
char month[10];
char buffer[20];
char *ret = 0;

int main(){
ret = fgets(buffer,20,stdin);
sscanf(buffer,"%s %d",month,&date);
//printf("MONTH: %s DATE: %d\n",month,date);
if((!(strcmp(month,"DEC")) && date == 25) || (!(strcmp(month,"OCT")) && date == 31)){
  printf("yup\n");
}else{
  printf("nope\n");
}
return 0;
}