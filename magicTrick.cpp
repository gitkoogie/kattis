#include <iostream>
#include <chrono>

int main(){
	char s[51];
	std::cin >> s;

	int out = 1;
	int i = 0, j = 0;
	while(s[i] != 0){
		j = i + 1;
		while(s[j] != 0){
			if(s[i] == s[j]){
				out = 0;
			}
			j++;
		}
		i++;
	}
	printf("%d", out);

	return 0;
}