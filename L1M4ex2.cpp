#include <iostream>
#include <string>

using namespace std;
using std::string;


template<typename T>
class Pair {
public:
 Pair(const T& t, const T& u) 
    : first(t), second(u) {}

 T& get_first() { return first; }
 T& get_second() { return second; }
 const T& get_first() const { return first; }
 const T& get_second() const { return second; }
 T add_pair(){cout <<'(' << first + second << ')' << endl;}
private:
 T first;
 T second;
};

template<typename T> void print_pair(const T& p){
    cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}

int main(){
    Pair<float> c(5,9.8);
    string x1 = "Jose" , x2 = "Maria";
    Pair<string> p(x1,x2);
    print_pair(c);
    c.add_pair();

    print_pair(p);
    p.add_pair();  
}