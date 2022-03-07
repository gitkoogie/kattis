#include <iostream>


int main(){
	char s[1000];
	std::cin >> s;

	bool a_found = false;
	int idx = 0;
	while(!a_found){
		if(s[idx] == 'a'){
			a_found = true;	
		} else{
			idx++;	
		}
		
	}
	while(s[idx] != 0){
		printf("%c", s[idx]);
		idx++;
	}

	return 0;
}