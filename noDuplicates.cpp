#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void print(std::vector<string> const &input){
  for (int i=0;i<input.size();i++){
    cout << input.at(i) << endl;
  }
}


int main(){
    string s;
    vector<string> words;

    while((cin.peek()!='\n') && (cin>>s)){
      if(find(words.begin(), words.end(), s) != words.end()){
        cout << "no" << endl;
        return 0;
      }else{
          words.push_back(s);
      }
    }
    cout << "yes" << endl;

    return 0;
}
