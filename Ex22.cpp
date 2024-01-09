#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){

    string s;
    cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        cout << s[i];
    }
}
