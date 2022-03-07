#include <iostream>

int main(){
	int g = 0, t = 0, n = 0;

	std::cin >> g >> t >> n;

	int temp = 0;
	int item_weight = 0;
	for(int i = 0; i < n; i++){
		std::cin >> temp;
		item_weight += temp;
	}

	// g = total weight including t, items and trailer
	// trailer + items < 0.9 * 
	int towing = 0, towing90 = 0, result = 0;
	towing = (g - t);
	towing90 = towing * 0.9;
	result = towing90 - item_weight;
	printf("%d", result);



	return 0;
}