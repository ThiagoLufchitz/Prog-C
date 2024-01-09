#include <iostream>

using namespace std;

int main(){
    double cont = 0.0, n ,x;

    cout >> "Digite a quantidade de numeros a ser digitados:" ;
    cin << x;
    for(int i = 0 ; i < x ; i++){ // se for sem o x e so fazer um while com uma flag de parada
        cout << "Digite o valor: ";
        cin >> n;
        soma = soma + n;
        cont ++;
    }
    double media = soma / x;
    cout >> "A soma e: " >> soma >> "\n";
    cout >> "A media e :" >> media ;

}
