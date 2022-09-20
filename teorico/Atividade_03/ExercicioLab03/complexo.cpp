#include <iostream>
#include <cmath>
#include "classe.h"

using namespace std;

Complexo :: Complexo()
{
    Numeroreal = 1;
    Numeroimaginario = 1;
}

Complexo :: Complexo (double NumReal, double NumImag)
{
    Numeroimaginario = NumImag;
    Numeroreal = NumReal;
}

void Complexo :: setReal(double NumReal)
{
    Numeroreal = NumReal;
}

void Complexo :: setImaginario(double NumImag)
{
    Numeroreal = NumImag;
}

Complexo Complexo :: Somar(Complexo c) {

}


void Complexo :: exibir()
{

}


