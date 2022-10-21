#include <iostream>
#include "PontoQuadradoPrisma.h"
#define MAXIMO 1000

using namespace std;

int main()
{
    int Quantidade;
    cout << "Informe a quantidade de objetos: ";
    cin >> Quantidade;
    cout << endl;

    if (Quantidade < 0 || Quantidade >= MAXIMO)
    {
        Quantidade = 5;
    }

    Ponto* Vetor[MAXIMO];

    cout << "Voce escolheu criar " << Quantidade << " objetos!" << endl;

    for (int j = 0; j < Quantidade; j++)
    {
        cout << endl;
        int opcao = Menu();
        if (opcao == 0)
        {
            return 0;
        }
        switch ( opcao )
        {
        case 1:
            Vetor[ j ] = new Ponto;
            cout << endl;
            cin >> *Vetor[j];
            break;

        case 2:
            Vetor[ j ] = new Quadrado;
            cout << endl;
            cin >> *Vetor[j];

            break;

        case 3:
            Vetor [ j ] = new Circulo;
            cout << endl;
            cin >> *Vetor[j];
            break;

        case 4:
            Vetor[ j ] = new Prisma;
            cout << endl;
            cin >> *Vetor[j];
            break;

        case 5:
            Vetor[ j ] = new Cilindro;
            cout << endl;
            cin >> *Vetor[j];
            break;
        }
    }

    for (int i = 0; i < Quantidade; i++)
    {
        cout << *Vetor[i] << endl;
    }

    for (int i = 0; i < Quantidade; i++)
    {
        delete Vetor[i];
    }

    return 0;
}
