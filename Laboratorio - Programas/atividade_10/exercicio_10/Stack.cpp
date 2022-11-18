#include <iostream>
using namespace std;
#include <stack>
#include <stdlib.h>

void menuPilha();
void PilhaTopo();
void PilhaInserir();
void PilhaRemover();
void PilhaTotalElementos();
void TamanhoPilha();

stack<int> pilha;

int main()
{
    menuPilha();

    getchar();
    return 0;

}

void menuPilha()
{
    int opcao = 0;
    while (opcao != 6)
    {
        cout << "----------------------------------------------" << endl;
        cout << "Pilha: Escolha uma opcao!" << endl;
        cout << "----------------------------------------------" << endl << endl;

        cout << "1 - Insira um elemento na pilha!" << endl;
        cout << "2 - Remova um elemento na pilha!" << endl;
        cout << "3 - Elemento do topo da pilha!" << endl;
        cout << "4 - Tamanho da pilha!" << endl;
        cout << "5 - Visualizar os elementos da pilha!" << endl;
        cout << "6 - Encerrar programa!" << endl;
        cout << "\nEscolha uma opcao: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            PilhaInserir();
            break;
        case 2:
            PilhaRemover();
            break;
        case 3:
            PilhaTopo();
            break;
        case 4:
            TamanhoPilha();
            break;
        case 5:
            PilhaTotalElementos();
            break;
        case 6:
            cout << "Programa encerrado!" << endl;
            break;
        default:
            cout << "Insira uma opcao valida!" << endl;
        }
    }
}

void PilhaInserir()
{
    int e;
    cout << "Elemento a ser inserido: ";
    cin >> e;
    pilha.push(e);
    cout << "\nElemento inserido" << endl << endl;
}

void PilhaTopo()
{
    cout << "Elemento do topo da pilha: ";
    cout << pilha.top() << endl;
}

void PilhaRemover()
{
    if (!pilha.empty())
    {
    pilha.pop();
    cout << "Elemento removido!" << endl;
    }
    else
    {
        cout << "Pilha vazia!" << endl;
    }
}

void PilhaTotalElementos()
{
    if (pilha.empty())
    {
        cout << "Pilha vazia!" << endl;
    }
    else
    {
        while (!pilha.empty())
        {
            cout << pilha.top() << endl;
            pilha.pop();
        }
    }
}

void TamanhoPilha()
{
    if (!pilha.empty())
    {
    cout << "O tamanho da pilha e: " << pilha.size() << endl;
    }
    else
    {
        cout << "Pilha vazia!" << endl;
    }
}
