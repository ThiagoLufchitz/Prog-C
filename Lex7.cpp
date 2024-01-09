#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::string;

struct Retangulo{
     float c1 , c2, h;
};

int main(){
    struct Retangulo T;
    cin >> T.c1 >> T.c2 >> T.h;
    if (T.c1 != T.c2){
        if (T.c2 != T.h){
            if(T.c1 != T.h){
                cout << "sim";
            }else{
                cout << "nao";
            }
        }else{
            cout << "nao";
        }
    }else{
        cout << "nao";
    }


}

