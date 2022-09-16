#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#include <iostream>

class Pilha
{
private:
    int *dados;
    int tamanho;
    int topo;
    void alocaMemoria();
public:
    Pilha();
    Pilha(int t);
    ~Pilha();

    bool vazio();
    void push (int v);
    int top();
    int pop();
};


#endif // PILHA_H_INCLUDED
