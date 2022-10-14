#include "classe07.h"

void Politico :: ler() // Poliformismo
{
    cout << "Nome: ";     cin >> nome;
    cout << "Partido: ";  cin >> partido;
    fflush(stdin);
    cout << "Numero: ";   cin >> numero;
}
void Politico :: exibir() // Poliformismo
{
    cout << "Nome: "    << nome << endl;
    cout << "Partido: " << partido << endl;
    cout << "Numero: "  << numero << endl;
}
ostream& operator << (ostream& saida, Politico& P)
{
    P.exibir();
    return saida;
}
istream& operator >> (istream& entrada, Politico& P)
{
    P.ler();
    return entrada;
}
