#include "classe.h"

PontoCartesiano operator + (int valor, PontoCartesiano& P)
{
    int Px = P.x + valor;
    int Py = P.y + valor;
    return PontoCartesiano{Px,Py};
}
ostream& operator << (ostream& saida, const PontoCartesiano& P)
{
    saida << "(" << P.x << ", " << P.y << ")";
    return saida;
}
istream& operator >> (istream& entrada, PontoCartesiano& P)
{
    entrada >> P.x >> P.y;
    return entrada;
}
PontoCartesiano& PontoCartesiano :: operator ++ ()    // Pre incremento
{
    x++;
    y++;
    return *this;
}
PontoCartesiano PontoCartesiano :: operator ++ (int valor) // Pos incremento
{
    PontoCartesiano aux = *this;
    ++(*this);
    return aux;
}
PontoCartesiano& PontoCartesiano :: operator -- ()    // Pre decremento
{
    x--;
    y--;
    return *this;
}
PontoCartesiano PontoCartesiano :: operator -- (int valor) // Pos decremento
{
    PontoCartesiano aux = *this;
    --(*this);
    return aux;
}

bool PontoCartesiano :: operator == (PontoCartesiano& P)
{

}
bool PontoCartesiano :: operator != (PontoCartesiano& P)
{

}
