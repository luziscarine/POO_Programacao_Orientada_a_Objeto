#ifndef INTEIROLONGO_H_INCLUDED
#define INTEIROLONGO_H_INCLUDED
#include <iostream>
using namespace std;

class InteiroLongo
{
private:
    int numero[30];
    int tamanho;

    void inicializar()
    {
        for (int i = 0; i < 31; i++)
        {
            numero[i] = 0;
        }
    }
public:
    InteiroLongo();
    ~InteiroLongo();

    void ler();
    void exibir();

    InteiroLongo soma (InteiroLongo IL);
    InteiroLongo diferenca (InteiroLongo IL);

    friend ostream& operator << (ostream& saida, const InteiroLongo& IL);
    friend istream& operator >> (istream& entrada, InteiroLongo& IL);

    InteiroLongo operator + (InteiroLongo IL);
    InteiroLongo operator - (InteiroLongo IL);

    bool operator < (InteiroLongo IL);
    bool operator > (InteiroLongo IL);
    bool operator <= (InteiroLongo IL);
    bool operator >= (InteiroLongo IL);
    bool operator != (InteiroLongo IL);
    bool operator == (InteiroLongo IL);
};


#endif // INTEIROLONGO_H_INCLUDED
