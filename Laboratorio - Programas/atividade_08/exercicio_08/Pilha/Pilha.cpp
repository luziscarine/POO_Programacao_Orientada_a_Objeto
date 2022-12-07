#include "Pilha.h"
#include <stdexcept>


Pilha::Pilha(int memoria)
{
      ponteiroDaPilha = -1;
      tamanho = (memoria > 0) ? memoria : 10;
      dados = new int [tamanho];
}

Pilha::~Pilha()
{
      delete [] dados;
}

int Pilha :: puxar (int &Pu)
{
      if (ponteiroDaPilha == -1)
      {
            throw runtime_error("Pilha esta vazia!");
      }
      Pu = dados[ponteiroDaPilha--];
      return Pu;
}

int Pilha :: empurrar (int &Em)
{
      if (ponteiroDaPilha == -1)
      {
            throw runtime_error("Pilha esta cheia!");
      }
      dados[++ponteiroDaPilha] = Em;
      return Em;
}

Pilha :: Pilha (const Pilha& P)
{
      ponteiroDaPilha = P.ponteiroDaPilha;
      tamanho = P.tamanho;
      dados = new int [tamanho];
      for (int i = 0; i <= ponteiroDaPilha; i++)
      {
            dados[i] = P.dados[i];
      }
}

Pilha& Pilha :: operator = (const Pilha& P)
{
      delete [] dados;
      ponteiroDaPilha = P.ponteiroDaPilha;
      tamanho = P.tamanho;
      dados = new int [tamanho];
      for (int i = 0; i <= ponteiroDaPilha; i++)
      {
            dados[i] = P.dados[i];
      }
      return *this;
}

ostream& operator << (ostream& saida, const Pilha& P)
{
      for (int i = 0; i <= P.ponteiroDaPilha; i++)
      {
            saida << P.dados[i] << " ";
      }
      return saida;
}

istream& operator >> (istream& entrada, Pilha& P)
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