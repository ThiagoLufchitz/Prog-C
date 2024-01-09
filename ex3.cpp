#include <iostream>

using namespace std;

int main(){
    int i , x , v[10];

    for(i = 0; i < 10 ; i++){
        cout << "Digite o valor na posicao " << i << ": ";
        cin >> x;
        v[i] = x;
    }
    for(auto y : v){
         if ( y%2 == 0 ){
            cout << y << " ";
         }
    }
}

