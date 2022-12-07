#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Pilha
{
private:
      int *dados;
      int ponteiroDaPilha;
      int tamanho;
public:
      Pilha (int memoria = 0);
      virtual ~Pilha(void);

      int puxar (int &Pu);
      int empurrar (int &Em);

      Pilha (const Pilha&);
      Pilha& operator = (const Pilha&);

      friend ostream& operator << (ostream& saida, const Pilha& P);
      friend istream& operator >> (istream& entrada, Pilha& P);
};

#endif