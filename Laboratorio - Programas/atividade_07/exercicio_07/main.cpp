#include "classe07.h"
#include "PontoCirculoCilindro.h"
#define maximo 100
#define MAXIMO 100

void FuncaoPolitico();
void FuncaoPontoCirculoCilindro();
int subMenu();
int main()
{
    int opcao = subMenu();

    if (opcao == 0)
    {
        system("Pause");
    }
    switch ( opcao )
    {
    case 1:
        system("cls");
        FuncaoPolitico();
        break;
    case 2:
        system("cls");
        FuncaoPontoCirculoCilindro();
        break;
    }

    system("pause");
    return 0;
}

void FuncaoPolitico()
{
    int quantidade;
    cout << "Informe a quantidade de politicos: ";
    cin >> quantidade;
    cout << endl;

    if (quantidade < 0 || quantidade >= maximo)
    {
        quantidade = 5;
    }

    Politico* vetor[quantidade];

    cout << "Escolha " << quantidade << " vezes que deseja criar!" << endl;

    for (int j = 0; j < quantidade; j++)
    {
        cout << endl;
        int opcao = menu();

        if (opcao == 0)
        {
            system("Pause");
        }


        switch ( opcao )
        {
        case 1:
            vetor[j] = new Presidente;
            cout << endl;
            cin >> *vetor[j];
            break;
        case 2:
            vetor[j] = new Governador;
            cout << endl;
            cin >> * vetor [j];
            break;
        case 3:
            vetor[j] = new Prefeito;
            cout << endl;
            cin >> * vetor [j];
            break;
        }
    }

    cout << endl << "### Mostrar Vetor! ###" << endl;
    for (int i = 0; i < quantidade; i++)
    {
        cout << *vetor[i] << endl;
    }

    cout << endl << "#### FIM ####" << endl;

    for (int i = 0; i < quantidade; i++)
    {
        delete vetor[ i ];
    }
}
void FuncaoPontoCirculoCilindro()
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
            system("Pause");
        }
        switch ( opcao )
        {
        case 1:
            Vetor[ j ] = new Ponto;
            cout << endl;
            cin >> *Vetor[j];
            break;
        case 2:
            Vetor[ j ] = new Circulo;
            cout << endl;
            cin >> *Vetor[j];
            break;
        case 3:
            Vetor[ j ] = new Cilindro;
            cout << endl;
            cin >> *Vetor[j];
            break;
        }
    }

    cout << "### Mostrar Vetor ###" << endl;
    for (int i = 0; i < Quantidade; i++)
    {
        cout << *Vetor[i] << endl;
    }

    cout << endl << "#### FIM ####" << endl;

    for (int i = 0; i < Quantidade; i++)
    {
        delete Vetor[i];
    }
}
int subMenu()
{
    int opcao;
    cout << "1 - Programa Politico\n" << "2 - Programa Ponto, Circulo e Cilindro\n" << "0 - Sair" << endl;
    cout << "Digite o programa que voce deseja acessar: ";
    while (cin >> opcao)
    {
        if (opcao == 0 || opcao == 1 || opcao == 2)
        {
            return opcao;
        }
        cout << "Digite uma das opcoes disponiveis" << endl;
    }
}
