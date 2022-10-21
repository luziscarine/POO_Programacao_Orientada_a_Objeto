#include <iostream>
#include <cmath>
#include "classe.h"

using namespace std;

int Complexo :: contador = 0;

Complexo :: Complexo()
{
    Numeroreal = 1;
    Numeroimaginario = 1;
    contador++;
}

Complexo :: Complexo (double NumReal, double NumImag)
{
    Numeroimaginario = NumImag;
    Numeroreal = NumReal;
    contador++;
}


void Complexo :: setarReal(double NumReal)
{
    Numeroreal = NumReal = 1;
}

void Complexo :: setarImaginario(double NumImag)
{
    Numeroreal = NumImag = 1;
}

Complexo Complexo :: Somar(Complexo complexo)
{
    Complexo c (pegarReal() + complexo.pegarReal(), pegarImaginario() + complexo.pegarImaginario() );
    return c;
}

Complexo Complexo :: Subtrair ( Complexo complexo )
{
    Complexo c (pegarReal() - complexo.pegarReal(), pegarImaginario() - complexo.pegarImaginario() );
    return c;
}

Complexo Complexo :: Produto (Complexo complexo)
{
    Complexo c ( pegarReal() *complexo.pegarReal() - pegarImaginario() * complexo. pegarImaginario(), pegarReal() * complexo.pegarImaginario() - pegarImaginario() * complexo.pegarReal() );
    return c;
}

Complexo Complexo :: Dividir (Complexo complexo)
{
    double a = ( (Numeroreal * complexo.Numeroreal + Numeroimaginario * complexo.Numeroimaginario) / (pow(complexo.pegarReal(), 2) + pow(complexo.pegarImaginario(), 2))) ;
    double b = ( complexo.Numeroreal * Numeroimaginario - Numeroreal * complexo.Numeroimaginario) / (pow(complexo.Numeroreal, 2) + pow (complexo.Numeroimaginario, 2));

    Complexo Divisao(a, b);
    return Divisao;
}

void Complexo :: exibir()
{
    cout << pegarReal() << " + " << pegarImaginario() << "i" << endl;
}




