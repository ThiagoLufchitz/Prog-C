#include <iostream>
#include <vector>

using namespace std;

class Fraction{
    private:
       int num, denom;
    public:
        Fraction() : num(0) ,denom(1){};
        Fraction(int n, int d) : num(n) {
            if (d == 0){
                d = 1;
            }
            denom = d;
        };

        friend ostream &operator<<(ostream &os,const Fraction &saida);
        friend istream &operator>>(istream &is, Fraction &entrada);
        friend Fraction operator+(Fraction &first,Fraction &second);
        friend Fraction operator-(Fraction &first,Fraction &second);
        friend Fraction operator*(Fraction &first,Fraction &second);
        friend Fraction operator/(Fraction &first,Fraction &second);
    
};

ostream &operator<<(ostream &os,const Fraction &saida){
    os << '\n' <<saida.num << "/" << saida.denom; 
    return os;
}

istream &operator>>(istream &is,Fraction &entrada){
    is >> entrada.num >> entrada.denom ;
    return is;
}

Fraction operator+(Fraction &first,Fraction &second){
    Fraction soma = first;
    soma.num = (first.num*second.denom) + (second.num*first.denom);
    soma.denom = first.denom * second.denom;
    return soma;
}
Fraction operator-(Fraction &first,Fraction &second){
    Fraction sub = first;
    sub.num = (first.num*second.denom) - (second.num*first.denom);
    sub.denom = first.denom * second.denom;
    return sub;
}
Fraction operator*(Fraction &first,Fraction &second){
    Fraction mult = first;
    mult.num = first.num*second.num;
    mult.denom = first.denom * second.denom;
    return mult;
}
Fraction operator/(Fraction &first,Fraction &second){
    Fraction div = first;
    div.num = first.num * second.denom;
    div.denom = first.denom * second.num;
    return div;
}


int main () {
    Fraction a(17,26);
    Fraction b(11,27);
    Fraction c, d, e, f;

    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    
    cout << "Fraction a:" <<endl;
    cout << a <<endl;
    cout << "Fraction b:" <<endl;
    cout << b <<endl;
    cout << "Fraction c:" <<endl;
    cout << c <<endl;
    cout << "Fraction d:" <<endl;
    cout << d <<endl;
    cout << "Fraction e:" <<endl;
    cout << e <<endl;
    cout << "Fraction f:" <<endl;
    cout << f <<endl;
    cout << "Resultados:" <<endl;
    cout << a + b;
    cout << c - d;
    cout << e * f;
    cout << e / f;
}