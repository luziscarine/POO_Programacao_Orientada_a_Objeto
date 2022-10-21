#include <iostream>
#include "classe.h"
using namespace std;

void OperationComplexPersonalizado ();
void TrianguloRetanguloValidacao ();
void LongNumber ();

int main()
{
    cout << " ---------------------------------- First Program ------------------------------------- \n" << endl;
    OperationComplexPersonalizado();
    cout << "\n -------------------------------- Second Program ------------------------------------ \n" << endl;
    TrianguloRetanguloValidacao();
    cout << "\n -------------------------------- Third Program ------------------------------------- " << endl;
    LongNumber();

    return 0;
}

void OperationComplexPersonalizado ()
{
    Complexo soma;
    Complexo difereca;
    Complexo produto;
    Complexo dividir;

    Complexo c1 (1, 3);
    Complexo c2 (2, 1);

    cout << "First Number Complex: ";
    c1.exibir();
    cout << "Second Number Complex: ";
    c2.exibir();
    cout << endl;

    soma = c1.Somar(c2);
    difereca = c1.Subtrair(c2);
    produto = c1.Produto(c2);
    dividir = c1.Dividir(c2);

    cout << "Sum: ";
    soma.exibir();
    cout << "Minus: ";
    difereca.exibir();
    cout << "Product: ";
    produto.exibir();
    cout << "Division: ";
    dividir.exibir();
    cout << "\nModulo 01: " << c1.Modulo();
    cout << "\nModulo 02: " << c2.Modulo() << endl;

    cout << "\nTotal elements C1: " <<  c1.visualizarContador() << endl;
    cout << "Total elements C2: " <<  c2.visualizarContador() << endl;
}

void TrianguloRetanguloValidacao ()
{
    TrianguloRetangulo TR1(4, 3, 5);
    cout << "Lado 01: " << TR1.pegarLadoPrimeiro() << "\tLado 02: " << TR1.pegarLadoSegundo() << "\tLado 03: " << TR1.pegarLadoTerceiro() << endl;
    cout << endl;
    cout << "Numero de trinagulos retangulos com um dos lados menores do que cem " << endl;
    TR1.CemPrimeirosTriangulosRetangulos();
}

void LongNumber ()
{

}
