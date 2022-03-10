#include <cstdio>
int main(){
	int in,mod,mod2;
	scanf("%d",&in);
	mod = in % 10;
	mod2 = (in - mod) / 10;
	printf("%d%d", mod,mod2);


	return 0;
}