#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

class Polinomio {
private:
    float *constantes;
    int grau;
public:
    Polinomio();
    Polinomio(int);
    Polinomio(const Polinomio&); // Because of Pointer
    ~Polinomio();

    Polinomio operator + (Polinomio P);
    Polinomio operator - (Polinomio P);

    friend ostream& operator << (ostream& saida, const Polinomio& P);
    friend istream& operator >> (istream& entrada, Polinomio P);

    float& operator [] (int);
    Polinomio operator = (const Polinomio& P);
};

class PontoCartesiano {
private:
    int x, y;
public:
    PontoCartesiano(int Px, int Py)
    {
        x = Px; y = Py;
    }
    ~PontoCartesiano() {}

    int pegar_x() {return x;}
    int pegar_y() {return y;}

    friend ostream& operator << (ostream& saida, const PontoCartesiano& P);
    friend istream& operator >> (istream& entrada, PontoCartesiano& P);

    PontoCartesiano& operator ++ ();    // Pre incremento
    PontoCartesiano operator ++ (int); // Pos incremento

    PontoCartesiano& operator -- ();    // Pre decremento
    PontoCartesiano operator -- (int); // Pos decremento

    friend PontoCartesiano operator + (int, PontoCartesiano& P);
    int modulo() {return sqrt(x*x + y*y);}

    bool operator == (PontoCartesiano& P);
    bool operator != (PontoCartesiano& P);
};

#endif // CLASSE_H_INCLUDED
