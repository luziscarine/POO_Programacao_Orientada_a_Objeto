#include <iostream>
#include "retangulo.h"
#include "cmath"
#include <string>
#define pi 3.141593

using namespace std;

// Quando o metodo for void sera necessario referenciar a variavel com ->


PoligonosRegulares :: PoligonosRegulares()
{
    b = 3;
    n = 3;

    cout << endl;
    cout << "\nFoi criado um objeto padronizado!" << endl;
}

PoligonosRegulares :: PoligonosRegulares (int b, int n)
{
    setLados(n);
    setComprimento(b);

    cout << "\nFoi criado um objeto personalizado!" << endl;
}
void PoligonosRegulares :: setComprimento (int b)
{
    this->b = b;
}

void PoligonosRegulares :: setLados (int n)
{
    if (n >= 3 || n <= 10)
        this->n = n;
    else
        n = 3;
}

int PoligonosRegulares :: getComprimento ()
{
    return b;
}

int PoligonosRegulares :: getLados ()
{
    return n;
}

int PoligonosRegulares :: perimetro ()
{
    return n * b;
}

int PoligonosRegulares :: area ()
{
    return ( (n * ( pow(2, b) ) * cos (pi/n)) / (4 * sin(pi/n)) );
}

string PoligonosRegulares :: nomePoligono() {
    int opcao = n;
    switch (opcao) {
    case 3:
        return "Triangulo";
    break;
    case 4:
        return "Quadrado";
    break;
    case 5:
        return "Heptagono";
    break;
    case 6:
        return "Hexagono";
    break;
    case 7:
        return "Heptagono";
    break;
    case 8:
        return "Octagono";
    break;
    case 9:
        return "Eneagono";
    break;
    case 10:
        return "Decagono";
    break;
    default:
        if (n < 3) return "Não existe poligono que tenha menos de tres lados :) ";
        if (n > 10) return "O programa aguenta no maximo os 8 primeiros poligonos :( ";
    }

}
