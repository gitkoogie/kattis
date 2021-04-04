#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

int num_of_factorials{};

cin >> num_of_factorials;

int i {0};
int factorial {0};

while(i<num_of_factorials){
    
    cin >> factorial;
    
    int sum {1};
    
    for(int j{1}; j<=factorial; j++){
        
        sum *= j;
    }

    
    if(factorial>=5){
        cout << 0 << endl;
    }else if(factorial == 4){
        cout << 4 << endl;
    }else
        cout << sum<< endl;
        i++;
}



return 0;


}