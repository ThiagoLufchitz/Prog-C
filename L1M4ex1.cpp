#include <iostream>
#include <string>
#include <cstring>

using namespace std;
using std::string;

template<typename T,typename G> T maximum(const T &v1, const G &v2){
    if (v1 > v2){ return v1; }
    else if (v2 > v1){ return v2; }
}

template<typename X> X cota(const X &s){ return s; }

int main(){
       string x1 = "He",x2 = "Hill"; 
       cout << cota(maximum(x1,x2)) << endl;
       cout << cota(maximum(7.4,3));
}