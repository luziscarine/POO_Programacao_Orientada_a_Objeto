#include <iostream>
#include <cmath>
#include "classe.h"

using namespace std;

Complexo :: Complexo() {
    Numeroreal = 1;
    Numeroimaginario = sqrt(-1);
}

Complexo :: Complexo (double NumReal, double NumImag) {
    Numeroimaginario = NumImag;
    Numeroreal = NumReal;
}

void Complexo :: exibir() {

}
