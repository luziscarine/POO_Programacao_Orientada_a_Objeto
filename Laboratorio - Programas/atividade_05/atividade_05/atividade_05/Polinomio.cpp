#include "classe.h"

Polinomio :: Polinomio()
{
    grau = 1;
    constantes = new float[grau]; // Because of Pointer
    constantes[0] = 1;
    constantes[1] = 1;
}
Polinomio :: Polinomio(int x)
{
    grau = x + 1;
    constantes = new float[grau];
    for (int i = 0; i < grau; i++)
    {
        constantes[i] = 1;
    }
}
Polinomio :: Polinomio(const Polinomio& P) // Because of Pointer
{
    grau = P.grau;
    constantes = new float[grau];
    for(int i = 0; i < P.grau; i++)
    {
        constantes[i] = P.constantes[i];
    }
}
Polinomio :: ~Polinomio() // Because of Pointer
{
    delete[] constantes; // Because of Pointer
}
Polinomio Polinomio :: operator + (Polinomio P)
{
    Polinomio aux(max(P.grau, grau) - 1);
    int i = 0;

    for (i; i < min(P.grau, grau); i++)
    {
        aux[i] = P.constantes[i] + constantes[i];
    }

    if (P.grau > grau)
    {
        for (int j = i; j < P.grau; j++)
        {
            aux[j] = P.constantes[j];
        }
    }
    else
    {
        for (int j = i; j < P.grau; j++)
        {
            aux[j] = constantes[j];
        }
    }
    return aux;
}
Polinomio Polinomio :: operator - (Polinomio P)
{
    Polinomio aux(max(P.grau, grau)-1);
    int i = 0;

    for (i; i < min(P.grau, grau); i++)
    {
        aux[i] = constantes[i] - P.constantes[i];
    }

    if (P.grau > grau)
    {
        for (int j = i; j < P.grau; j++)
        {
            aux[j] = - P.constantes[j];
        }
    }
    else
    {
        for (int j = i; j < grau; j++)
        {
            aux[j] = constantes[j];
        }
    }
    return aux;
}
ostream& operator << (ostream& saida, const Polinomio& P)
{
    for (int i = 0; i < P.grau; i++)
    {
        if (i != P.grau - 1)
        {
            saida << "X^" << i << " + "; // P[i] ?
        }
        else
        {
            saida  << "X^" << i << " = 0"; // P[i] ?
        }
    }
    return saida;
}
istream& operator >> (istream& entrada, Polinomio P)
{
    cout << "Polinomio: C0 + C1X1 + C2X2 + ... + CnXn = 0" << endl;
    for (int i = 0; i < P.grau; i++)
    {
        cout << "Digite o valor de C " << i << ": ";
        entrada >> P[i];
    }
    return entrada;
}
float& Polinomio :: operator [] (int aux)
{
    if (aux >= 0 && aux < grau)
    {
        return constantes[aux];
    }
    else
    {
        return constantes[0];
    }
}

Polinomio Polinomio :: operator = (const Polinomio& P)
{
    delete [] constantes;
    grau = P.grau;
    constantes = new float[grau];
    for (int i = 0; i < P.grau; i++)
    {
        constantes[i] = P.constantes[i];
    }
    return *this;
}
