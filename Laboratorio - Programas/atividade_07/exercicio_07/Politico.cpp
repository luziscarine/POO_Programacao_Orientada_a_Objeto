#include "classe07.h"

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

void Politico :: ler() // Poliformismo
{
    cout << "Nome: ";
    cin >> nome;
    cout << "Partido: ";
    cin >> partido;
    cout << "Numero: ";
    cin >> numero;
}

void Politico :: exibir() // Poliformismo
{
    cout << "Nome: "    << nome << endl;
    cout << "Partido: " << partido << endl;
    cout << "Numero: "  << numero << endl;
}
void Presidente :: ler()
{
    Politico :: ler();
    cout << "Digite o pais: ";
    cin >> pais;
}
void Presidente :: exibir()
{
    Politico :: exibir();
    cout << "Pais: " << pais << endl;
}

void Governador :: ler()
{
    Presidente :: ler();
    cout << "Digite o estado: ";
    cin >> estado;
}
void Governador :: exibir()
{
    Presidente :: exibir();
    cout << "Estado: " << estado << endl;
}

void Prefeito :: ler()
{
    Governador :: ler();
    cout << "Digite o cidade: ";
    cin >> municipio;
}
void Prefeito :: exibir()
{
    Governador :: exibir();
    cout << "Cidade: " << municipio << endl;
}
int menu()
{
    int aux;
    cout << "1 -> Presidente \n2 -> Governador \n3 -> Prefeito\n0 -> Sair\n\nDigite a opcao desejada: ";

    while (cin >> aux)
    {
        if(aux == 0 || aux == 1 || aux == 2 || aux == 3)
        {
            return aux;
        }
        else
        {
            cout << "Digite uma das opcoes disponiveis!" << endl;
        }
    }
}
