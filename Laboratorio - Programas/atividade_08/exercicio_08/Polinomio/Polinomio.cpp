#include "Polinomio.h"
#include <stdexcept>

Polinomio::Polinomio()
{
      grau = 2;
      constantes = new float[grau];
      constantes[0] = 1;
      constantes[1] = 1;
}

Polinomio::~Polinomio()
{
      delete[] constantes;
}

Polinomio :: Polinomio (int x)
{
      grau = x + 1;
      constantes = new float[grau];
      for (int i = 0; i < grau; i++)
      {
            constantes[i] = 1;
      }
}

Polinomio :: Polinomio (const Polinomio& P){
      grau = P.grau;
      constantes = new float[grau];
      for (int i = 0; i < P.grau; i++)
      {
            constantes[i] = P.constantes[i];
      }
}

float& Polinomio :: operator [] (int n)
{
      if (n >= 0 && n < grau)
      {
            return constantes[n];
      }
      else 
      {
            throw out_of_range("Indice invalido!!");
      }
}

Polinomio Polinomio :: operator = (const Polinomio& P)
{
      delete [] constantes;
      grau = P.grau;
      constantes = new float[grau];
      for (int i = 0; i < P.grau; i++)
      {
            constantes[i] = P.constantes[i];
      }
      return *this;
}

ostream& operator << (ostream& saida, Polinomio& P)
{
      for (int i = 0; i < P.grau; i++)
      {
            if (i != P.grau-1)
            {
                  saida << P[i] << "X^" << i << ( (P[i+1] >= 0) ? " + " : " " );
            }
            else 
            {
                  saida << P[i] << "X^" << i << " = 0";
            }
            return saida;
      }
}

istream& operator >> (istream& entrada, Polinomio& P)
{
      cout << "Polinomio: C0 + C1X1 + C2X2 + ... + CNXN = 0" << endl;
      for (int i = 0; i < P.grau; i++)
      {
            cout << "Digite o valor de C " << i << ":";
            entrada >> P[i];
      }
      return entrada;
}


Polinomio Polinomio :: operator+(Polinomio P)
{
      Polinomio aux(max(P.grau, grau)-1);
      int i;
      for (i = 0; i < min(P.grau,grau); i++)
      {
            aux[i] = P.constantes[i] + constantes[i];
      }
      if (P.grau > grau)
      {
            for (int j = i; j < P.grau; j++)
            {
                  aux[j] = P.constantes[j];
            }
      }
      else 
      {
            for(int j = i; j < grau; j++)
            {
                  aux[j] = constantes[j];
            }
      }
      return aux;
}

Polinomio Polinomio :: operator-(Polinomio P)
{
      Polinomio aux(max(P.grau, grau)-1);
      int i;
      for (i = 0; i < min(P.grau,grau); i++)
      {
            aux[i] = P.constantes[i] - constantes[i];
      }
      if (P.grau > grau)
      {
            for (int j = i; j < P.grau; j++)
            {
                  aux[j] = - P.constantes[j];
            }
      }
      else 
      {
            for(int j = i; j < grau; j++)
            {
                  aux[j] = constantes[j];
            }
      }
      return aux;
}
