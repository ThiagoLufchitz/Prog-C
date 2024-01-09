#include<iostream>
#include<string>

using namespace std;

class Triangulo{
    public:
        float base,altura,result;

        void calcuraArea(){
            result = (altura * base) / 2;
            cout << "o valor da Area e : " << result ;
        }
};

int main()
{
    Triangulo n1,n2;
    cout << "Informe a base e a altura do Primeiro Triangulo : ";
    cin >> n1.base >> n1.altura;
    cout << "Informe a base e a altura do Segundo Triangulo : ";
    cin >> n2.base >> n2.altura;
    n1.calcuraArea();
    n2.calcuraArea();
    return 0;
}


/*
class Triangulo{
public:
  float base;
  float altura;

  void calculaArea(){
    cout << (base * altura) / 2.0 << endl;
  }
};

int main(){
  Triangulo b, a;

  cout << "Informe a base e a altura do triangulo A: ";
  cin >> a.base >> a.altura;

  cout << "Informe a base e a altura do triangulo B: ";
  cin >> b.base >> b.altura;

  a.calculaArea();
  b.calculaArea();
}*/