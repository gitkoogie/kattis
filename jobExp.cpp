#include <iostream>


int main(){
	int n = 0;

	std::cin >> n;
	int sum = 0;
	int temp = 0;
	for(int i = 0;i<n;i++){
		std::cin >> temp;
		if(temp < 0){
			sum += (-1 * temp);
		}
		
	}

	std::cout << sum;


	return 0;
}