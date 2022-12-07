#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Polinomio
{
private:
      float *constantes;
      int grau;
public:
      Polinomio();
      Polinomio(int);
      Polinomio(const Polinomio&);
      virtual ~Polinomio();

      Polinomio operator = (const Polinomio&);
      Polinomio operator + (Polinomio);
      Polinomio operator - (Polinomio);

      float& operator [] (int);

      friend ostream& operator << (ostream& saida, Polinomio& P);
      friend istream& operator >> (istream& entrada, Polinomio& P);

};

#endif

