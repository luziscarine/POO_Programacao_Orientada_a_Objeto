#ifndef POLINOMIO_H_INCLUDED
#define POLINOMIO_H_INCLUDED
#include <iostream>
#include <stdlib.h>
using namespace std;

class Polinomio{
private:

public:
    Polinomio();
    ~Polinomio();


    friend ostream& operator << (ostream& saida, const Polinomio& P);
    friend istream& operator >> (istream& entrada, Polinomio& P);

};


#endif // POLINOMIO_H_INCLUDED
