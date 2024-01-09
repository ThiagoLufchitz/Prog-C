#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::string;

int posi(int *vet ,int max, int min){
    int i;
    int p=1;
    max = vet[0];
    min = vet[0];
    for(i=0; i<10; i++){
        if(max < vet[i]){
            max = vet[i];
            p = i;
            p++;
        }else if(vet[i] < min){
            min = vet[i];
        }
    }
    return p;
}

int main(){
    int vet[10], i;
    int max, min, p;
    for(i=0; i<10; i++){
        cin >> vet[i];
        if(vet[i] > max){
            max = vet[i];
        }else if(vet[i] < min){
            min = vet[i];
        }
    }

    max = vet[0];
    min = vet[0];

    for(i=0; i<10; i++){
        if(vet[i] > max){
            max = vet[i];
        }else if(vet[i] < min){
            min = vet[i];
        }
    }

    p = posi(vet,max,min);
    cout << p << " " << min << " " << max;
}
