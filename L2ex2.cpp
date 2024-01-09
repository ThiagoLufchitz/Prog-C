#include<iostream>
#include<string>

using namespace std;

class Lampada{
    public:
    bool ligada,Economica;
    string tipo;
    int voltagem;
    int potencia;

    void ligar(){ligada = true;}
    void desligar(){ligada = false;}
    void ehEconomica(){
        if(potencia < 40 ){Economica = true;}
        else{Economica = false;}
    }
    void status(){
        if(ligada){
            cout << "A lampada "+tipo <<" esta ligada ";
            if (Economica)
                cout << " e economica " << endl;
            else
                cout << " e nao e economica" << endl;
        }
        else{
            cout << "A lampada "+tipo <<" esta desligada";
            if (Economica)
                cout << " e economica " << endl;
            else
                cout << " e nao e economica" << endl;
        }
    }

};

int main(){
    Lampada lamp1,lamp2;
    lamp1.tipo = "incandecente";
    lamp1.potencia = 60;
    lamp1.voltagem = 220;

    lamp1.ligar();
    lamp1.ehEconomica();
    lamp1.status();
    lamp1.desligar();
    lamp1.status();

    lamp2.tipo = "Led";
    lamp2.potencia = 30;
    lamp2.voltagem = 110;

    lamp2.ligar();
    lamp2.ehEconomica();
    lamp2.status();
    lamp2.desligar();
    lamp2.status();
}