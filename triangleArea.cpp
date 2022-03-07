#include <iostream>

int main(){
	double h = 0, b = 0;
	double area = 0;
	std::cin >> h >> b;
	area = (h * b) / 2;
	printf("%.1lf", area);

	return 0;
}