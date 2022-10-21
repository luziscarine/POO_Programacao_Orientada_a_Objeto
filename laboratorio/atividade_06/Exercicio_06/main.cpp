#include <iostream>
#include <cmath>
#include "classe.h"
using namespace std;

void FuncaoPolitico();
void FuncaoTresDimensoes();
void FuncaoPolinomio();
void FuncaoDDD();

int main()
{
    FuncaoPolitico();
    cout << endl << endl;
    FuncaoTresDimensoes();
    cout << endl << endl;
    FuncaoPolinomio();
    cout << endl << endl;
    system("pause");
    return 0;
}

void FuncaoPolitico()
{
    Politico P1("Padre Kelson... , Padre Kelvin..., Candidato Padre! ", "Partido: Uniao Brasil, eu acho...", 14);
    cout << endl;
    P1.Imprime();
    cout <<"\n\n"<< endl;


    Presidente Pe1("Luladrao roubou meu coracao... Sou messias mas nao faco milagre... ", "Partido dos Trabalhadores, Partido Liberal", 13, "Patria amada Brasil...");
    cout << endl;
    Pe1.Imprime();
    cout <<"\n\n"<< endl;

    Governador Go1("Lojas Zema", "O mesmo Novo de sempre...", 20, "Brasil", "Oh Minas quem te conhece nao esquece jamais");
    cout << endl;
    Go1.Imprime();
    cout << "\n\n" << endl;

    Prefeito Pef1("Cristian Gondola", "Partido da Social Democracia Brasileiro", 25, "Brasil", "Mina Gerais", "Itajuba visite antes que acabe :( ");
    cout << endl;
    Pef1.Imprime();
    cout << "\n\n" << endl;
}
void FuncaoTresDimensoes()
{
    Ponto P (3, 4);
    Circulo S (3, 4, 5);
    Cilindro V (3,4, 5, 6);

    cout << "Ponto: " << P << endl;
    cout << "Superficie circular: " << S << endl;
    cout << "Volume cilindrico: " << V << endl;

    cout << "Area circular: " << S.area() << endl;
    cout << "Volume cilindrico: " << V.volume() << endl;
}

void FuncaoPolinomio()
{
    Polinomio P(2);
    cin >> P;

    cout << "Polinomio: " << P << endl;
    cout << "A funcao: " << P << " para (x = 2) e " << P.calculo(2) << endl;

    Polinomio derivada = P.derivada();
    cout << "A derivada da funcao e: " << derivada << endl;
    int valorInicial = 20;
    long long int interacoes = 200;
    cout << "Raiz aproximada " << P.raiz(valorInicial, interacoes) << endl;
}
void FuncaoDDD()
{

}
