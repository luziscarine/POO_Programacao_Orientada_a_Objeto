#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "classe.h"
#include <cmath>

using namespace std;

void NumeroImaginario();            //  Exercicio 01
void SomaNumeroImaginario();        //  Exercicio 01
void DiferencaNumeroImaginario();   //  Exercicio 01
void ProdutoNumeroImaginario();     //  Exercicio 01
void RazaoNumeroImaginario();       //  Exercicio 01
void NumeroGrande();                //  Exercicio 02
void Triangulo();                   //  Exercicio 03

int main()
{
    int opcao;
    while (opcao != 0)
    {

        cout << "------------------------------------- Escolha um programa ----------------------------- \n" << endl;
        cout << "0 ---> Sair\n1 ---> NumeroImaginario\n2 ---> NumeroGrande\n3 ---> Triangulo\n\nEscolha uma opcao:  ";
        cin >> opcao;
        system("cls");

        switch(opcao)
        {
        case 0:
            cout << "Programa Encerrado!" << endl;
            break;
        case 1:
            NumeroImaginario();
            break;
        case 2:
            NumeroGrande();
            break;
        case 3:
            Triangulo();
            break;
        default:
            cout << "Selecione uma opcao valida seu palhaco!" << endl;
            getchar();
            system("cls");
            break;
        }
    }
    return 0;
}

void NumeroImaginario()
{
    int opcao;
    while (opcao != 0)
    {
        cout << " ------------------------------------------------- Escolha uma operacao ----------------------------------------------- \n" << endl;
        cout << "0 ---> Sair\n1 ---> Soma\n2 ---> Subtracao\n3 ---> Produto\n4 ---> Razao\n\nSelecione a operacao desejada para numeros complexos: ";
        cin >> opcao;
        system("cls");
        switch(opcao)
        {
        case 0:
            cout << "Programa Encerrado! " << endl;
            break;
        case 1:
            SomaNumeroImaginario();
            break;
        case 2:
            DiferencaNumeroImaginario();
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            system("cls");
            break;
        }
    }
}

void SomaNumeroImaginario()
{
    int Real_0, Imaginario_0;
    int Real_1, Imaginario_1;
    Complexo auxiliar;

    cout << "Parte Real 0 = ";
    cin >> Real_0;
    cout << "Parte Imaginaria 0 = ";
    cin >> Imaginario_0;

    cout << "Parte Real 1 = ";
    cin >> Real_1;
    cout << "Parte Imaginaria 1 = ";
    cin >> Imaginario_1;

    Complexo C0 (Real_0, Imaginario_0);
    Complexo C1 (Real_1, Imaginario_1);

    cout << "\nNumero complexo A = ";
    C0.exibir();
    cout << "\nNumero complexo B = ";
    C1.exibir();

    cout << "A + B: ";
    auxiliar = C0.Somar(C1);
    auxiliar.exibir();
}

void DiferencaNumeroImaginario()
{

    int Real_0, Imaginario_0;
    int Real_1, Imaginario_1;
    Complexo auxiliar;

    cout << "Parte Real 0 = ";
    cin >> Real_0;
    cout << "Parte Imaginaria 0 = ";
    cin >> Imaginario_0;

    cout << "Parte Real 1 = ";
    cin >> Real_1;
    cout << "Parte Imaginaria 1 = ";
    cin >> Imaginario_1;

    Complexo C2 (Real_0, Imaginario_0);
    Complexo C3 (Real_1, Imaginario_1);

    cout << "\nNumero complexo A = ";
    C2.exibir();
    cout << "\nNumero complexo B = ";
    C3.exibir();

    cout << "A - B: ";
    auxiliar = C2.Subtrair(C3);
    auxiliar.exibir();
}
void ProdutoNumeroImaginario()
{
}
void RazaoNumeroImaginario()
{

}

void NumeroGrande()
{
}
void Triangulo()
{
}
