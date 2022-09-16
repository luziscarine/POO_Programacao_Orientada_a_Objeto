#include <iostream>
#include "pilha.h"

using namespace std;

void Pilha :: alocaMemoria  ()
{
    if (tamanho > 0)
        dados = new int [tamanho];
    else
        dados = nullptr;
}

Pilha :: Pilha ()
{
    tamanho = 100;
    topo = -1;
    alocaMemoria();
}

Pilha :: Pilha (int t)
{
    if (t < 0 ) t = 0;
    tamanho = t;
    topo = -1;
    alocaMemoria();
    cout << "Construindo pilha... " << endl;
}

Pilha::~Pilha()
{
    if (dados != nullptr)
        delete[] dados;
    cout << "Destruindo dados... " << endl;
}

bool Pilha :: vazio()
{
    return (topo == -1 ? true : false);
}

void Pilha :: push(int v)
{
    if (dados != nullptr && topo != tamanho - 1)
    {
        topo++;
        dados[topo] = v;
    }
}

int Pilha :: top()
{
    if (!vazio())
        return dados[topo];
}

int Pilha :: pop()
{
    if (!vazio())
        return dados[topo--];
}
