#include <iostream>
#include <cmath>
#include "classe.h"

TrianguloRetangulo :: TrianguloRetangulo() {
    primeiroLado = 3;
    segundoLado = 4;
    terceiroLado = 5;
}

TrianguloRetangulo :: TrianguloRetangulo (int pL, int sL, int tL) {
    if (( (pow(pL,2)) == (pow(sL, 2) + pow(tL,2))) || ((pow(sL,2)) == (pow(pL, 2) + pow(tL,2))) || ((pow(tL,2)) == (pow(sL, 2) + pow(pL,2)))){
    primeiroLado = pL;
    segundoLado = sL;
    terceiroLado = tL;
    cout << "This is one triangle!" << endl;
    } else {
        cout << "This is not triangle" << endl;
        primeiroLado = 3;
        segundoLado =  4;
        terceiroLado = 5;
    }
}

void TrianguloRetangulo :: CemPrimeirosTriangulosRetangulos () {
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            for (int c = 1; c <= 100; c++) {
                if (a * a == b * b + c * c) {
                    cout << "Lado 01: " << a << "\tLado 02: " << b << "\tLado 03: " << c << endl;
                }
            }
        }
    }
}


