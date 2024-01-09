#include <iostream>
#include <string>

using namespace std;

using std::string;

class Partida{
    public:
        string home;
        int goalHome ;
        int pointsHome = 4;
        string visitor;
        int goalVisitor ;
        int pointsVisitor = 3;

        void resultado(string home, int goalHome, string visitor, int goalVisitor){
           cout << "nome do time da casa: " << endl;
            cin >> home;
            cout << "numero de gols:" << endl;
            cin >> goalHome;

            cout << "nome do time visitante: " << endl;
            cin >> visitor;
            cout << "numero de gols:" << endl;
            cin >> goalVisitor;
           
           /*
           cout << "Time casa " << home << endl;
            cout << "Total de gols: " << goalHome << endl; 
            cout << "Time visitante: " << visitor << endl; 
            cout << "Total de gols: " << goalVisitor << endl;
            */
        }

        void calculaPontos(){
            if(goalHome > goalVisitor){
                pointsHome = pointsHome + 2;
            }else if(goalHome < goalVisitor){
                pointsVisitor = pointsVisitor + 2;
            }else if(goalHome == goalVisitor){
                pointsHome += 1; 
                pointsVisitor += 1;
            }else{
                pointsHome += 0; 
                pointsVisitor += 0;
            }
        }

        void mostraResultado(){
            cout << "Visitante " << pointsVisitor << " x " << pointsHome << " Mandante" << endl;
        }
};

int main()  {
    Partida p1,p2;
    string home,visitor;
    int goalHome=0,goalVisitor=0;

    p1.resultado(home,goalHome,visitor,goalVisitor);
    p1.calculaPontos();
    p1.mostraResultado();

    p2.resultado(home,goalHome,visitor,goalVisitor);
    p2.calculaPontos();
    p2.mostraResultado();


}