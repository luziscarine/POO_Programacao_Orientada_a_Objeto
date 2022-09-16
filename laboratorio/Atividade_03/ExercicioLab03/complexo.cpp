#include <iostream>
#include <cmath>
#include "classe.h"

using namespace std;

int Complexo :: contador = 0;

Complexo :: Complexo() {
    Numeroreal = 1;
    Numeroimaginario = 1;
    contador++;
}

Complexo :: Complexo (double NumReal, double NumImag) {
    Numeroimaginario = NumImag;
    Numeroreal = NumReal;
    contador++;
}


void Complexo :: exibir() {
    cout << getReal() << " ";
    if (getImaginario() < 0) cout << getImaginario() << "i" << endl;
    else cout << "+ j" << getImaginario() << endl;
 }

void Complexo :: setReal(double NumReal) {

}

void Complexo :: setImaginario(double NumImag) {

}

Complexo Complexo :: Somar (Complexo complexo) {
    Complexo temp(getReal() + complexo.getReal(), getImaginario() + complexo.getImaginario());
    return temp;
}

Complexo Complexo :: Subtrair (Complexo complexo) {
    Complexo temp(getReal() - complexo.getReal(), getImaginario() - complexo.getImaginario());
    return temp;
}

