#include "InteiroLongo.h"

InteiroLongo :: InteiroLongo()
{
    inicializar();
}
InteiroLongo :: ~InteiroLongo()
{

}
void InteiroLongo ::  ler()
{
    string palavra;
    cin >> palavra;
    tamanho = palavra.length();
    for (int i = 0; i < tamanho; i++)
    {
        numero[i] = palavra[tamanho - 1 - i] - 'o';
    }
}
void InteiroLongo ::  exibir()
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << numero[i];
        cout << endl;
    }
}
InteiroLongo InteiroLongo ::  soma (InteiroLongo IL)
{
    InteiroLongo IL1;
    IL1.tamanho = 0;

    for (int i = 0, VaiUm = 0; VaiUm || i < max(tamanho, IL.tamanho); i++)
    {
        int x = VaiUm;
        if (i < tamanho)
        {
            x += numero[i];
        }
        if (i < IL.tamanho)
        {
            x += IL.numero[i];
        }
        IL1.numero[IL1.tamanho++] = x % 10;
        VaiUm = x / 10;
    }
    return IL1;
}
InteiroLongo InteiroLongo ::  diferenca (InteiroLongo IL)
{

}
ostream& operator << (ostream& saida, const InteiroLongo& IL)
{

}
istream& operator >> (istream& entrada, InteiroLongo& IL)
{

}
InteiroLongo operator + (InteiroLongo IL)
{

}
InteiroLongo operator - (InteiroLongo IL)
{

}
bool InteiroLongo ::  operator < (InteiroLongo IL)
{

}
bool InteiroLongo ::  operator > (InteiroLongo IL)
{

}
bool InteiroLongo ::  operator <= (InteiroLongo IL)
{

}
bool InteiroLongo ::  operator >= (InteiroLongo IL)
{

}
bool InteiroLongo ::  operator != (InteiroLongo IL)
{

}
bool InteiroLongo ::  operator == (InteiroLongo IL)
{

}
