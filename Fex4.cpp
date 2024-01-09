#include <iostream>

using namespace std;

int main(){
    int n , fato;
    cout << " Digite o numero: ";
    cin >> n;
    for (int i = 1 ; i < n; i++){
        fato = fato * i;
    }
    cout << "O fatorial e: " << fato;

}
