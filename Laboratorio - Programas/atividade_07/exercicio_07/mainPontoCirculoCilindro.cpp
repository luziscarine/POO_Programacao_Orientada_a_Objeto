#include "PontoCirculoCilindro.h"
#define MAXIMO 1000

int main()
{
    int quantidade;
    cout << "Informe a quantidade de formas: ";
    cin >> quantidade;
    cout << endl;

    if (quantidade < 0 || quantidade >= MAXIMO)
    {
        quantidade = 5;
    }

    Ponto* vetor[MAXIMO];

    cout << "Escolha " << quantidade << "vezes qual o tipo que deseja criar" << endl;

    for (int j = 0; j < quantidade; j++)
    {
        cout << endl;
        int opcao = Menu();
        if (opcao == 0)
        {
            return 0;
        }
        switch ( opcao ) {
        case 1:
            vetor[ j ] = new Ponto;
            cout << endl;
            cin >> *vetor[j];
        }
    }

    return 0;
}
