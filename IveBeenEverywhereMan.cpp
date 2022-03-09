#include <iostream>
#include <vector>
#include <string>


int unique_str(int range, std::vector<std::string>& dest){
	int num = 0;
	int equal = 0;
	int found[range];

	for(int i = 0; i < range - 1; i++){
		if(dest[i].compare(dest[i + 1])){

		}

	}
	return num;
}

int main(){
	int T = 0;
	int n = 0;
	std::cin >> T;

	// for cases
	for(int i = 0; i < T;i++){
		std::cin >> n;
		std::vector<std::string> dest_vec;
		std::string str;
		// get trips
		for(int j = 0; j < n;j++){
			std::cin >> str;
			if(j==0){	// if first element put into vector
				dest_vec.push_back(str);	
			}else{		// else check if already in vector
				int s = dest_vec.size();
				bool checker = true;
				for(int k = 0; k < s; k++){
					if(!(str.compare(dest_vec[k]))){
						checker = false;
						break;
					}
				}
				if(checker){
					dest_vec.push_back(str);
				}
			}
		}
		std::cout << dest_vec.size() << std::endl;
	}

	return 0;
}