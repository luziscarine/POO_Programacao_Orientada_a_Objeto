#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
class Vetor
{
private:
      T *vetor;
      int tamanho;
public:
      Vetor();
      Vetor (int);
      virtual ~Vetor() {delete[] vetor;}

      Vetor (const Vetor<T>& other);
      Vetor& operator = (const Vetor& other);

      T& operator[](int i);
      void ordena();

      friend ostream& operator << (ostream& saida, const Vetor<T>& P)
      {
            for (int i = 0; i < P.tamanho; i++)
                  {
                        saida << P.vetor[i] << " ";
                  }
            return saida;
      }

      friend istream& operator >> (istream& entrada, Vetor<T>& P)
      {
            cout << "Digite " << P.tamanho << " valores: ";
            for (int i = 0; i < P.tamanho; i++)
                  {
                        entrada >> P.vetor[i];
                  }
            cout << endl;
            return entrada;
      }
};


template <typename T>
Vetor<T> :: Vetor()
{
      tamanho = 10;
      vetor = new T[10];
      for (int i = 0; i < 10; i++)
      {
            vetor[i] = 0;
      }
}


template <typename T>
Vetor<T> :: Vetor (int tam)
{
      vetor = new T[tam];
      tamanho = tam;
      for(int i = 0; i < tam; i++)
      {
            vetor[i] = 0;
      }
}

template <typename T>
Vetor<T>  :: Vetor (const Vetor& P)
{
      tamanho = P.tamanho;
      vetor = new T[tamanho];
      for (int i = 0; i < tamanho; i++)
      {
            vetor[i] = P.vetor[i];
      }
}

template <typename T>
Vetor<T>& Vetor<T> :: operator = (const Vetor<T> & P)
{
      delete [] vetor;
      tamanho = P.tamanho;
      vetor = new T[tamanho];
      for (int i = 0; i < P.tamanho; i++)
      {
            vetor[i] = P.vetor[i];
      }
      return *this;
}

template <typename T>
T& Vetor<T> :: operator[] (int i)
{
      if (i >= 0 && i < tamanho)
      {
            return vetor[i];
      }
      else 
      {
            throw out_of_range("Indice fora da faixa!");
      }
}

template <typename T>
void Vetor<T> :: ordena()
{
      T aux;
      for (int i = 0; i < tamanho; i++)
      {
            for (int j = 0; j < tamanho-1-i; j++)
            {
                  if(vetor[j] > vetor[j+1])
                  {
                        aux = vetor[j];
                        vetor[j] = vetor[j+1];
                        vetor[j+1] = aux;
                  }
            }
      }
}

#endif