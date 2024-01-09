#include<iostream>
#include<string>

using namespace std;

class Partida{
    public:
    string nome_time_M,nome_time_V;
    int n_gol_time_M=0,n_gol_time_V=0,g1,g2;
    int pontuacao_M = 0,pontuacao_V = 0;

    int resultado(string nome_time_M,int n_gol_time_M,string nome_time_V,int n_gol_time_V){
        cout << "Digite o nome do time Mandante e numero de gols do time Mandante: ";
        cin >> nome_time_M >> n_gol_time_M;
        g1 = n_gol_time_M;
        cout << "Digite o nome do time Visitante e numero de gols do time Visitante: ";
        cin >> nome_time_V >> n_gol_time_V;
        g2 = n_gol_time_V; 
    }
    int calculaPontos(){
        if(g1 > g2)
            pontuacao_M = pontuacao_M + 3;
        else if(g2 > g1){   
            pontuacao_V = pontuacao_V + 3;
        }
        else if(g1 == g2){
            pontuacao_M++;
            pontuacao_V++;
        }
    }

    void mostraResultado(){
        cout << "Visitante "<< g2 << " X "<< g1 <<" Mandante"<< "\n";
        cout << "Pontuacao (V): "<< pontuacao_V << " Pontuacao (M): "<< pontuacao_M << "\n";
    }
};

int main(){
    Partida p1,p2;
    string time1,time2;
    int gol1=0,gol2=0;

    p1.resultado(time1,gol1,time2,gol2);
    p1.calculaPontos();
    p1.mostraResultado();

    p2.resultado(time1,gol1,time2,gol2);
    p2.calculaPontos();
    p2.mostraResultado();
    return 0;
}