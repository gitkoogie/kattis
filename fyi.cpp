#include <iostream>

int main(){

	int n = 0;
	std::cin >> n;
	if((n / 10000) == 555){
		printf("%d", 1);
	}else{
		printf("%d", 0);
	}
	return 0;
}