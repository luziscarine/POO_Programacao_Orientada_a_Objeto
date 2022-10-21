#include <iostream>
#include "retangulo.h"
using namespace std;

CRetangulo :: CRetangulo()
{
    altura = 1;
    comprimento = 1;

    cout << endl;
    cout << "Foi criado um novo objeto padronizado!" << endl;
}


CRetangulo :: CRetangulo (int h, int c)
{
    setComprimento(c);
    setAltura(h);

    cout << endl;
    cout << "Foi criado um novo objeto personalizado!" << endl;
}


void CRetangulo :: setComprimento(int c)
{
    if (c > 1 && c <= 20)
        comprimento = c;
    else
        comprimento = 1;
}

void CRetangulo :: setAltura (int h)
{
    if (h > 1 && h <= 20)
        altura = h;
    else
        altura = 1;
}

int CRetangulo :: getComprimento ()
{
    return comprimento;
}

int CRetangulo :: getAltura ()
{
    return altura;
}

int CRetangulo :: calculoArea()
{
    return comprimento * altura;
}

int CRetangulo :: calculoPerimetro()
{
    return ((2 * comprimento) + (2 * altura));
}

bool CRetangulo :: quadrado()
{
    if (comprimento == altura)
        return true;
    else
        return false;
}

void CRetangulo :: mostraRetangulo(char b, char p)
{
    int c = comprimento, h = altura;
    int i = 0, j = 0;

    for (i = 0; i <= c; i++)
    {
        for (j = 0; j <= h; j++)
        {
            if (i != 0 && i != c && j != 0 && j != h){
            cout << " " << b << " ";
            } else {
                cout << " " << p << " ";
            }
        }
        cout << endl;
    }
}


