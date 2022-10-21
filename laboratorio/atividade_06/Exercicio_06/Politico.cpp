#include "classe.h"

Politico :: ~Politico ()
{
    cout << "Erased the created politic... " << endl;
}
void Politico :: Imprime()
{
    cout << "Number: " << numero << endl;
    cout << "Name: " << nome << endl;
    cout << "Partido: " << partido << endl;
}

Presidente :: ~Presidente()
{
    cout << "Erased the created politic... " << endl;
}
void Presidente :: Imprime()
{
    Politico :: Imprime();
    cout << "Country: " << pais << endl;
}

Governador :: ~Governador()
{
    cout << "destruct one governator..." << endl;
}

void Governador :: Imprime()
{
    Presidente :: Imprime();
    cout << "Governator: " << estado << endl;
}

Prefeito :: ~Prefeito()
{
    cout << "Destruct one Mayor..." << endl;
}

void Prefeito :: Imprime()
{
    Governador :: Imprime();
    cout << "Mayor: " << municipio << endl;
}
