#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){

    string c1,inverso;
    cin >> c1;
    for(int i=0; i<c1.size(); i++){
        inverso = c1[i] + inverso;
    }
    cout << inverso << endl;
    return 0;
}
