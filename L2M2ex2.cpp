#include <iostream>
#include <string>
#include <cmath>
#include <vector>
# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

class ObjetoGeometrico{
private:
    float area , perimetro;
public:
    double pi = M_PI;
    ObjetoGeometrico(){ area =0; perimetro =0;}
    
    float getArea(){ return area;}
    float getPerimetro(){return perimetro;}
    float setArea(float b){area = b;}
    float setPerimetro(float a){perimetro = a;}
    virtual void CalculaArea(float base, float altura){ //retangulo
         setArea((base*altura)/2);
    }
    virtual void CalculaArea(float base, float l1,float l2){ //triangulo
        float s;
        s = (base+l1+l2)/2;
        setArea(sqrt((s*(s-base)*(s-l1)*(s-l2))));
    }
    virtual void CalculaArea(float raio){ // circulo
        setArea( pow(raio,2)*pi);
    }
    virtual void CalculaPerimetro(float l1,float l2){
        setPerimetro( 2*l1 + 2*l2 );
    }
    virtual void CalculaPerimetro(float l1,float l2, float l3){
        setPerimetro( l1 + l2 + l3);
    }
    virtual void CalculaPerimetro(float raio){
        setPerimetro( 2 * pi * raio);
    }
};

class Triangulo : public ObjetoGeometrico{
private:
    float base,l1,l2;
public:
    Triangulo(float base,float l1,float l2) : 
        ObjetoGeometrico(),base(base),l1(l1),l2(l2){}
    int getBase(){return base;}
    int getL1(){return l1;}
    int getL2(){return l2;}
};

class Retangulo : public ObjetoGeometrico{
private:
    float base,altura;
public:
    Retangulo(float base,float altura) : 
        ObjetoGeometrico(),base(base),altura(altura){}
    float getBase(){return base;}
    float getAltura(){return altura;}
};

class Circulo : public ObjetoGeometrico{
private:
    float raio,x,y;
public:
    Circulo(float raio,float x,float y) : 
        ObjetoGeometrico(),raio(raio),x(x),y(y){}
    float getRaio(){ return raio;}
    float getX(){return x;}
    float getY(){return y;}    
};

int main(){
    Triangulo t1(3,4,5);
    Retangulo t2(2,6);
    Circulo t3(4,0,0);
    t1.CalculaArea(t1.getBase(),t1.getL1(),t1.getL2());
    cout <<"Area do Triangulo :" << t1.getArea() << endl;
    t1.CalculaPerimetro(t1.getBase(),t1.getL1(),t1.getL2());
    cout <<"Perimetro do Triangulo :" << t1.getPerimetro() << endl;

    t2.CalculaArea(t2.getBase(),t2.getAltura());
    cout << "Area do Retangulo : " << t2.getArea() << endl;
    t2.CalculaPerimetro(t2.getBase(),t2.getAltura());
    cout << "Perimetro do Retangulo : " << t2.getPerimetro() << endl;
    
    t3.CalculaArea(t3.getRaio());
    cout << "Area do Circulo : " << t3.getArea() << endl;
    t3.CalculaPerimetro(t3.getRaio());
    cout << "Perimetro do Circulo : " << t3.getPerimetro() << endl;    
}