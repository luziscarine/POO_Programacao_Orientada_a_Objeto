#include <iostream>
#include <cstring>
#include "composicao.h"
using namespace std;

Date :: Date(int d, int m, int a) {
    dia = d; mes = m; ano = a;
    d = 1; m = 1; a = 0;
}

&Date :: setDia(int d) {
    this -> d = d;
    return *d;
}

Endereco :: Endereco (string r, string c, string e, int n) { // falta informação
    rua = r; cidade = c; estado = e; numero = n;
}

void Endereco :: exibir() {
    cout << "Rua: " << rua << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "Numero: " << numero << endl;
}



