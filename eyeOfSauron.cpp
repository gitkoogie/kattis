#include <cstdio>
int main(){
	char tower[100];
	int i = 0, ret;
	char temp;
	// get input
	while(temp != '\n'){
		ret = scanf("%c",&temp);
		tower[i] = temp;
		i++;
	}
	// check input
	bool correct = true;
	int straight_cnt = 0;

	for(int j=0;j<i;j++){

		// check part prior to eye
		if(tower[j] == '|'){
			straight_cnt++;
		// if eye
		}else if(tower[j] == '('){
			// check if other part of eye exist
			if(tower[j+1] == ')'){
				// check part after eye
				for(int k = j+1;k<i;k++){
					if(tower[k] == '|'){
						straight_cnt--;
					}
				}
				// if equally many straight lines 
				// on other side, i.e, 0 count
				if(straight_cnt == 0){
					printf("correct");
					j = i;
					break;
				}else{
					printf("fix");
					j = i;
					break;
				}
			// if it doesn't exist "fix" and break
			}else{
				printf("fix");
				j = i;
				break;
			}
		}
	}


	return 0;
}