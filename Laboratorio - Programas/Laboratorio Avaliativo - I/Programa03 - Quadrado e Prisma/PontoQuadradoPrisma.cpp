#include "PontoQuadradoPrisma.h"

void Ponto :: ler()
{
    cout << "Coordenada x: ";
    cin >> x;
    cout << "Ordenada y: ";
    cin >> y;
    cout << endl << endl;
}

void Circulo :: ler()
{
    cout << "Coordenada x: ";
    cin >> x;
    cout << "Coordenada y: ";
    cin >> y;
    cout << "Raio: ";
    cin >> raio;
    cout << endl << endl;
}

void Cilindro :: ler()
{
    cout << "Coordenada x: ";
    cin >> x;
    cout << "Ordenada y: ";
    cin >> y;
    cout << "Raio: ";
    cin >> raio;
    cout << "Altura: ";
    cin >> altura;
    cout << endl << endl;
}

void Quadrado :: ler()
{
    cout << "Coordenada x: ";
    cin >> x;
    cout << "Coordenada y: ";
    cin >> y;
    cout << "Lado: ";
    cin >> lado;
    cout << endl << endl;
}

void Prisma :: ler()
{
    cout << "Coordenada x: ";
    cin >> x;
    cout << "Ordenada y: ";
    cin >> y;
    cout << "Lado: ";
    cin >> lado;
    cout << "Altura: ";
    cin >> altura;
    cout << endl << endl;
}


istream& operator >> (istream& entrada, Ponto& P)
{
    P.ler();
    return entrada;
}
ostream& operator << (ostream& saida, const Ponto& P)
{
    cout << "Valores" << endl;
    P.exibir();
    cout << endl;
    return saida;
}

int Menu()
{
    int opcao;
    cout << "1 - Ponto\n" << "2 - Quadrado\n" << "3 - Circulo\n" << "4 - Prisma\n" << "5 - Cilindro\n" << "0 - Sair" << endl;
    cout << "\nDigite o objeto que voce deseja criar: ";
    while (cin >> opcao)
    {
        if (opcao == 0 || opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5)
            {
                return opcao;
            }
        cout << "Digite uma das opcoes disponiveis" << endl;
    }
}
