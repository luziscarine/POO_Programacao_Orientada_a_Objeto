#include <iostream>
#include "classe.h"
using namespace std;

void FuncaoPolinomio();
void FuncaoPontoCartesiano();

int main()
{
    PontoCartesiano p1{3,4}, p2{6,8};

    cout << "Ponto 01: " << p1 << endl;
    cout << "Ponto 02: " << p2 << endl;

    cout << "\nModulo do ponto 01: " << p1.modulo() << endl;
    cout << "Modulo do ponto 02: " << p2.modulo() << endl;

    cout << "\nCoordenadas do ponto 03 (x, y): ";
    cin >> p2;
    cout <<"Ponto 03: " << p2 << "\nModulo do Ponto 03: " << p2.modulo() << endl;


    return 0;
}

void FuncaoPolinomio()
{
    Polinomio P1(4), P2(5), P3(5);
    cin >> P1;
    cout << P1 << "\n\n" << endl;
    cin >> P2;
    cout << "\n\n" << P2 << endl;

    P3 = P2 - P1;
    cout << P3 << endl;

    P3 = P2 + P1;
    cout << P3 << endl;
}
void FuncaoPontoCartesiano()
{

}
