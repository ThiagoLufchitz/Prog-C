#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){

    string s;
    int cont=0;
    getline(cin,s);
    for(auto n : s ){
        if(!isgraph(n)){
            cont++;
        }
    }
    cout << cont+1 << endl;
    //cout << s.size();
}
