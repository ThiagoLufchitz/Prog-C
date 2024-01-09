#include <iostream>

using namespace std;
double conversao(double x){
    double y;
    y = (x - 30) / 2;
    return y;
}
int main(){
    double n1 , n2;

    cout << "Digite  a temperatura em Fahrenheit(°F): ";
    cin >> n1;

    cout << "A temperatura em Celsius e: " << conversao(n1) << "°C\n";
}
