#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int number_of_constant_quality_life {0};
    double quality_of_life {0.0};
    double years_of_quality {0.0};
    
    double sum_of_quality_life {0.0};
    
    int i {0};
    cin >> number_of_constant_quality_life;
    
    while(i<number_of_constant_quality_life){
        cin >> quality_of_life;
        cin >> years_of_quality;
        
        sum_of_quality_life += quality_of_life * years_of_quality;
        i++;
    }

cout  << sum_of_quality_life << endl;

return 0;

}