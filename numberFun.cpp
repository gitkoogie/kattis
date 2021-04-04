#include <iostream>
#include <vector>

using namespace std;

int main() {

int num_test_cases {0};
vector <double> values (3,0);

cin >> num_test_cases;

for (int i = 0; i < num_test_cases; ++i){

    cin >> values.at(0) >> values.at(1) >> values.at(2);

            if((values.at(0)+ values.at(1)) == values.at(2)){
                    
                    cout << "Possible" << endl;
            }
            else if ((values.at(0) - values.at(1)) == values.at(2)){
                    cout << "Possible" << endl;
            }
            else if ((values.at(1) - values.at(0)) == values.at(2)){
                    cout << "Possible" << endl;
            }
            else if ((values.at(1) * values.at(0)) == values.at(2)){
                    cout << "Possible" << endl;
            }
            else if ((values.at(1) / values.at(0)) == values.at(2)){
                    cout << "Possible" << endl;
            }
            else if ((values.at(0) / values.at(1)) == values.at(2)){
                    cout << "Possible" << endl;
            }
            else {
                    cout << "Impossible" << endl;
            }
}
    

    
    return 0;
}