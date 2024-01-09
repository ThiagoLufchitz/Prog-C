#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::string;

struct Ponto{
     int x , y;
}p;
double Distancia(int xa,int ya, int xb,int yb){
    double d;
    //double q = pow(std::abs(_p1._x - _p2._x), 2) + pow(std::abs(_p1._y - _p2._y), 2);
    d = pow((xb-xa), 2)+ pow((yb-ya), 2);
    return sqrt(d);
};

int main(){
    double resultado;
    struct Ponto a;
    Ponto b;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    resultado = Distancia(a.x,a.y,b.x,b.y);
    cout << resultado;

}
