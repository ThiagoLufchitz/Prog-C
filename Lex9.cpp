#include <iostream>
#include <string>

using namespace std;
using std::string;

void troca(int x,int y){
    int aux;
    aux = x;
    //cout << x << " " << y << endl;
    x = y ;
    y = aux;
    cout << x << " " << y;

}
int main(){
    int n1 , n2;
    cin >> n1 >> n2;
    troca(n1,n2);
}
