#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::string;
int tam = 10;

int compara(int vet[],int max, int min){
    int contmax;
    for (int i=0 ; i < tam ; i ++){
            if (vet[i] > max){
                max = vet[i];
                contmax = i;
            }
    }
    return contmax+1;
}

int main(){
    int vet[tam],n,f,max,min = 0;
    for (int i=0 ; i < tam ; i ++){
        cin >> n;
        vet[i] = n;
    }
    min = vet[0];
    for (int i=0 ; i < tam ; i++){
            if (vet[i] > max){
                max = vet[i];
            }
            if(vet[i]< min){
                min = vet[i];
            }
    }

    f = compara(vet,min,max);
    cout << f << " " << min << " " << max;

}
