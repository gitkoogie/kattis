#include <stdio.h>
#define BUF 1000

  char jon[BUF];
  char doctor[BUF];
  int offset = 0;
  int flag = 0;

int main(){

  fgets(jon,BUF,stdin);
  fgets(doctor,BUF,stdin);

  while(doctor[offset] != 'h'){
    if(jon[offset] == 'h'){
      printf("no\n");
      flag = 1;
      break;
    }
    offset++;
  }

if(flag == 0){
  printf("go\n");
}

return 0;
}