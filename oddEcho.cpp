#include <iostream>

int main(){
	int n;
	std::cin >> n;

	char w[100];
	for(int i = 0; i<n;i++){
		std::cin >> w;
		if((i % 2) == 0){
			std::cout << w << std::endl;	
		}
	}

	return 0;
}