#include <iostream>

using namespace std;

double maior(double x , double y){
    if (x > y){
        return x;
    }
    return y;
}

int main(){
    double n1 , n2;

    cout << "Digite  valor 1\n";
    cin >> n1;

    cout << "Digite  valor 2\n";
    cin >> n2;

    cout << "O valor maior e:" << maior(n1,n2) << "\n";
}
