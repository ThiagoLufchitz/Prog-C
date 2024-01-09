#include <iostream>
#include <string>

using namespace std;
using std::string;
int main(){

    string c1,c2;
    cin >> c1;
    cin >> c2;

    if(c1.size() > c2.size()){
        cout << "s1 maior";
    }else if(c2.size() > c1.size()){
          cout << "s2 maior";
    }else{
        cout << "iguais" << endl;
    }
}

