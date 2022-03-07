#include <iostream>

int main(){
	int n = 0,k = 0;
	double min = 0, max = 0;

	std::cin >> n >> k;
	double sum = 0;
	double temp = 0;
	for(int i = 0; i < k; i++){
		std::cin >> temp;
		sum += temp;
	}
	max = (sum + ((n - k) * 3)) / n;
	min = (sum + ((n - k) * - 3)) / n;

	printf("%.4lf %.4lf", min, max);

	return 0;
}