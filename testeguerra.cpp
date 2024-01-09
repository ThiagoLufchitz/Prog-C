#include <iostream>
#include <vector>

using namespace std;

class Fraction{
    private:
        float numera;
        float denomina;
    public:
        Fraction():numera(0),denomina(1){};
        Fraction(float num,float den):numera(num){
            if(den == 0 ){
                den = 1;
            }
            denomina = den;
        };

        friend ostream &operator<<(ostream &os, const Fraction &item);
        friend istream &operator>>(istream &is, Fraction &item);
        friend Fraction operator+(Fraction &lhs,Fraction &rhs);
        friend Fraction operator-(Fraction &lhs,Fraction &rhs);
        friend Fraction operator*(Fraction &lhs,Fraction &rhs);
        friend Fraction operator/(Fraction &lhs,Fraction &rhs);

};

//Operador de saida
ostream &operator<<(ostream &os, const Fraction &item){
    os << item.numera << "/" << item.denomina ;
    return os;
}

//Operador de entrada
istream &operator>>(istream &is, Fraction &item){
    is >> item.numera >> item.denomina ;
    return is;
}

Fraction operator+(Fraction &val1,Fraction &val2){
   Fraction sum = val1;
    sum.numera = (val1.numera*val2.denomina) + (val1.denomina*val2.numera);
    sum.denomina = val1.denomina*val2.denomina;
    return sum;
}

Fraction operator-(Fraction &val1,Fraction &val2){
   Fraction sum = val1;
    sum.numera = (val1.numera*val2.denomina) - (val1.denomina*val2.numera);
    sum.denomina = val1.denomina*val2.denomina;
    return sum;
}

Fraction operator*(Fraction &val1,Fraction &val2){
   Fraction sum = val1;
    sum.numera = (val1.numera*val2.denomina) + (val1.denomina*val2.numera);
    sum.denomina = val1.denomina*val2.denomina;
    return sum;
}

Fraction operator/(Fraction &val1,Fraction &val2){
   Fraction sum = val1;
    sum.numera =  (val1.numera/val2.denomina) + (val1.denomina/val2.numera);
    sum.denomina = val1.denomina / val2.numera;
    return sum;
}

int main (void) {
    Fraction a(17,26);
    Fraction b(11,27);
    Fraction c, d, e, f;

    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    cout << "Fraction a:" <<endl;
    cout << a << endl;
    cout << "Fraction b:" <<endl;
    cout << b << endl;
    
    cout << "Fraction c:" <<endl;
    cout << c << endl;
    cout << "Fraction d:" <<endl;
    cout << d << endl;
    cout << "Fraction e:" <<endl;
    cout << e << endl;
    cout << "Fraction f:" <<endl;
    cout << f << endl;

    cout << "Resultados:" <<endl;
    cout << a + b << endl;
    cout << c - d << endl;
    cout << e * f << endl;
    cout << e / f << endl;
}