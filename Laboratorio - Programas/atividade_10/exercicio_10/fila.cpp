#include <iostream>
using namespace std;
#include <list>
#include <stdlib.h>
#include <stdio.h>

list<int> lista;

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
        case 9:
            ListaPernonalElementosExcluir();
            break;
        case 10:
            ListaValoresDuplicadosExcluir();
            break;
        case 11:
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
    cout << "\nElemento inserido!" << endl;
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
    cout << "\nElemento inserido!" << endl;
    fflush(stdin);
    getchar();
    system("cls");
}
void ListaExcluirFrente()
{
    lista.pop_front();
    cout << "\nElemento excluido!" << endl;
    fflush(stdin);
    getchar();
    system("cls");
}
void ListaExcluirTras()
{
    lista.pop_front();
    cout << "\nElemento inserido!" << endl;
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaPrimeiroElemento()
{
    cout << lista.front() << endl;
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaUltimoElemento()
{
    cout << lista.back() << endl;
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaTamanho()
{
    cout << "Tamanho da lista: " << lista.size() << endl;
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaPernonalElementosExcluir()
{
    int e;
    cout << "Escolha um elemento para ser excluido da fila: ";
    cin >> e;
    //lista.remove(const int& e);
    fflush(stdin);
    getchar();
    system("cls");
}
void ListaValoresDuplicadosExcluir()
{
    int e;
    cout << "Escolha um elemento duplicado para ser excluido da fila: ";
    cin >> e;
    fflush(stdin);
    getchar();
    system("cls");
}

void ListaOrdenar()
{
    lista.sort();
    fflush(stdin);
    getchar();
    system("cls");
}
