#include <iostream>

using namespace std;

bool par(int x){
    if(x%2 == 0)
        return true;
    else
        return false;
}

int main(){
    int i , x , v[10];

    for(i = 0; i < 10 ; i++){
        cout << "Digite o valor na posicao " << i << ": ";
        cin >> x;
        v[i] = x;
    }
    for(auto y : v){
         if ( par(y)){
            cout << y << " ";
         }
    }
}

