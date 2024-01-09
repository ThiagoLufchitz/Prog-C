#include <iostream>
#include <string>

using namespace std;
using std::string;
int main(){

    string s;
    getline(cin,s);
    for(auto n : s ){
        if(isgraph(n)){
            cout << n;
        }
    }
}

