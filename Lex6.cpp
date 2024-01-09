#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::string;

struct Retangulo{
     float b , h;
};
float Area(){
    float ar;
    struct Retangulo R;
    cin >> R.b >> R.h;
    ar = R.b * R.h;
    return ar;
};

int main(){
    float resultado;
    resultado = Area();
    cout << resultado;

}
