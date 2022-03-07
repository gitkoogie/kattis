#include <iostream>

int main(){
	int n = 0;

	std::cin >> n;

	int temp = 0, sum = 0;
	int javeline = 0;
	for(int i = 0; i < n; i++){
		std::cin >> temp;
		sum += temp;
	}
	javeline = sum - n + 1;

	printf("%d", javeline);

	return 0;
}