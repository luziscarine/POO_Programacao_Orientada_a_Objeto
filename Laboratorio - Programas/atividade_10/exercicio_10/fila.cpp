#include <iostream>
using namespace std;
#include <list>
#include <stdlib.h>
#include <stdio.h>

list<int> lista = {1, 2, 3, 4, 6, 6, 6, 7, 7, 9, 0, 1, 8};

void menuLista();
void ListaInserirFrente();
void ListaInserirTras();
void ListaExcluirFrente();
void ListaExcluirTras();
void ListaPrimeiroElemento();
void ListaUltimoElemento();
void ListaTamanho();
void ListaPernonalElementosExcluir();
void ListaValoresDuplicadosExcluir();
void ListaOrdenar();
void ListaRedimensionar();
void ListaReverterOrdem();

int main()
{
    menuLista();
}

void menuLista()
{
    int opcao;
    while(opcao != 13)
    {
        cout << "===============================" << endl;
        cout << "Lista: Selecione uma opcao!" << endl;
        cout << "===============================" << endl << endl;
        cout << "1.Inserir elemento na frente" << endl;
        cout << "2.Inserir elemento no final" << endl;
        cout << "3.Excluir elemento na frente" << endl;
        cout << "4.Excluir elemento no final" << endl;
        cout << "5.Exibir primeiro elemento da lista" << endl;
        cout << "6.Exibir ultimo elemento da lista" << endl;
        cout << "7.Tamanho da lista" << endl;
        cout << "8.Redimensionar lista" << endl;
        cout << "9.Remover elementos com valores específicos" << endl;
        cout << "10.Remover valores duplicados" << endl;
        cout << "11.Reverter a ordem dos elementos" << endl;
        cout << "12.Ordenar a lista" << endl;
        cout << "13.Sair" << endl;
        cout << "\nSelecione uma opcao: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            ListaInserirFrente();
            break;
        case 2:
            ListaInserirTras();
            break;
        case 3:
            ListaExcluirFrente();
            break;
        case 4:
            ListaExcluirTras();
            break;
        case 5:
            ListaPrimeiroElemento();
            break;
        case 6:
            ListaUltimoElemento();
            break;
        case 7:
            ListaTamanho();
            break;
        case 8:
            ListaRedimensionar();
            break;
        case 9:
            ListaPernonalElementosExcluir();
            break;
        case 10:
            ListaValoresDuplicadosExcluir();
            break;
        case 11:
            ListaReverterOrdem();
            break;
        case 12:
            ListaOrdenar();
            break;
        case 13:
            cout << "Programa encerrado!" << endl;
            break;
        default:
            cout << "Selecione uma opcao valida!" << endl;
            break;
        }
    }
}

void ListaInserirFrente()
{
    int e;
    cout << "Insira um elemento na frente da fila: ";
    cin >> e;
    lista.push_front(e);
    cout << "\nElemento inserido!" << endl << endl << "Lista: " ;
    for (auto x:lista)
    {
        cout << "" << x << " ";
    }
    fflush(stdin);
    getchar();
    system("cls");
}
void ListaInserirTras()
{
    int e;
    cout << "Insira um elemento de tras da fila: ";
    cin >> e;
    lista.push_back(e);
    cout << "\nElemento inserido!" << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}
void ListaExcluirFrente()
{
    lista.pop_front();
    cout << "\nElemento excluido!" << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}
void ListaExcluirTras()
{
    lista.pop_front();
    cout << "\nElemento inserido!" << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaPrimeiroElemento()
{
    cout << lista.front() << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaUltimoElemento()
{
    cout << lista.back() << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaTamanho()
{
    cout << "Tamanho da lista: " << lista.size() << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaRedimensionar()
{
    int e;
    cout << "Redimensione o tamanho da lista: ";
    cin >> e;
    lista.resize(e);
    cout << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaPernonalElementosExcluir()
{
    int e;
    cout << "Remova elementos repetidos: " << endl;
    cin >> e;
    lista.remove(e);
    cout << "Itens removidos!" << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }

    fflush(stdin);
    getchar();
    system("cls");
}
void ListaValoresDuplicadosExcluir()
{
    lista.unique();
    cout << "Itens repetidos removidos!" << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }

    fflush(stdin);
    getchar();
    system("cls");
}

void ListaReverterOrdem()
{
    lista.reverse();
    cout << endl<< endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaOrdenar()
{
    lista.sort();
    cout << "Lista Ordenada!" << endl << endl;
    for (auto x:lista)
    {
        cout << x << "\t";
    }
    fflush(stdin);
    getchar();
    system("cls");
}
