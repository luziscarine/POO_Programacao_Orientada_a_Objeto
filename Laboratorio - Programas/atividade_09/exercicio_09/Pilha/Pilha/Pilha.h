#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
class Pilha
{
private:
      T *dados;
      int ponteiroDaPilha;
      int tamanho;
public:
      ~Pilha(void);
      Pilha (int memoria = 0);

      bool puxar (T &Pu);
      bool empurrar (T &Em);

      Pilha (const Pilha&);
      Pilha& operator = (const Pilha&);

      template <typename T1>
      friend ostream& operator << (ostream& saida, const Pilha<T1>& P);
      
      template <typename T1>
      friend istream& operator >> (istream& entrada, Pilha<T1>& P);
};
#endif

template <typename T>
Pilha<T>::Pilha(int memoria)
{
      ponteiroDaPilha = -1;
      tamanho = (memoria > 0) ? memoria : 10;
      dados = new T [tamanho];
}

template <typename T>
Pilha<T>::~Pilha(void)
{
      delete [] dados;
}

template <typename T>
bool Pilha<T> :: puxar (T &Pu)
{
      if (ponteiroDaPilha == -1)
      {
            return false;
      }
      Pu = dados[ponteiroDaPilha--];
      return Pu;
}

template <typename T>
bool Pilha <T> :: empurrar (T &Em)
{
      if (ponteiroDaPilha == tamanho-1)
      {
            return false;
      }
      dados[++ponteiroDaPilha] = Em;
      return Em;
}

template <typename T>
Pilha<T> :: Pilha (const Pilha<T>& P)
{
      ponteiroDaPilha = P.ponteiroDaPilha;
      tamanho = P.tamanho;
      dados = new T [tamanho];
      for (int i = 0; i <= ponteiroDaPilha; i++)
      {
            dados[i] = P.dados[i];
      }
}

template <typename T>
Pilha<T>& Pilha<T> :: operator = (const Pilha<T>& P)
{
      delete [] dados;
      ponteiroDaPilha = P.ponteiroDaPilha;
      tamanho = P.tamanho;
      dados = new T [tamanho];
      for (int i = 0; i <= ponteiroDaPilha; i++)
      {
            dados[i] = P.dados[i];
      }
      return *this;
}

template <typename T>
ostream& operator << (ostream& saida, const Pilha <T>& P)
{
      for (int i = 0; i <= P.ponteiroDaPilha; i++)
      {
            saida << P.dados[i] << " ";
      }
      return saida;
}

template <typename T>
istream& operator >> (istream& entrada, Pilha<T>& P)
{
      int a;

      P.ponteiroDaPilha = -1;
      cout << "Entre com os dados da pilha: ";
      try
      {
            for (int i = 0; i < P.tamanho; i++)
            {
                  entrada >> a;
                  P.empurrar(a);
            }
      }
      catch(runtime_error & e)
      {
            cout << e.what() << endl;
      }
      return entrada;
}
