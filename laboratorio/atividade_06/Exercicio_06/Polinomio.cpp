#include "classe.h"

Polinomio :: Polinomio()
{
    grau = 1;
    constantes = new float[grau];
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
Polinomio :: Polinomio (const Polinomio& P)
{
    grau = P.grau;
    constantes = new float[grau];
    for (int i = 0; i < P.grau; i++)
    {
        constantes[i] = P.constantes[i];
    }
}
Polinomio :: ~Polinomio()
{
    delete [] constantes;
}

Polinomio Polinomio :: operator = ( const Polinomio& P)
{
    delete [] constantes;
    grau = P.grau;
    constantes = new float[grau];

    for (int i = 0; i < P.grau; i++)
    {
        constantes[i] = P.constantes[i];
    }
}
Polinomio Polinomio :: operator + (Polinomio P)
{
    Polinomio aux(max(P.grau, grau) -1);
    int i = 0;

    for (i = 0; i < min(P.grau,grau); i ++)
    {
        aux[i] = P.constantes[i] + constantes[i];
    }

    if (P.grau > grau)
    {
        for (int j = i; j < P.grau; j++)
        {
            aux[i] = P.constantes[i];
        }
    }
    else
    {
        for(int j = i; j < grau; j++)
        {
            aux[i] = constantes[i];
        }
    }
    return aux;
}
Polinomio Polinomio :: operator - (Polinomio P)
{
    Polinomio aux(max(P.grau, grau)-1);
    int i;

    for (i = 0; i < min(P.grau, grau); i++)
    {
        aux[i] = constantes[i] - P.constantes[i];
    }

    if (P.grau > grau)
    {
        for (int j = i; j < P.grau; j++)
        {
            aux[i] = - P.constantes[i];
        }
    }
    else
    {
        for(int j = i; j < grau; j++)
        {
            aux[i] = constantes[i];
        }
    }
    return aux;
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

ostream& operator << (ostream& saida, Polinomio& P)
{
    for (int i = 0; i < P.grau; i++)
    {
        if (i != P.grau-1)
        {
            saida << P[i] << "x^" << i << " + ";

        }
        else
        {
            saida << P[i] << "x^" << i << " = 0";
        }
    }
    return saida;
}

istream& operator >> (istream& entrada, Polinomio& P)
{
    cout << "Polinomio: C0 + C1x^1 + C2x^2 + ... + CnX^n = 0" << endl;
    for (int i = 0; i < P.grau; i++)
    {
        cout << "C: " << i << ": ";
        entrada >> P[i];
    }
    return entrada;
}

Polinomio Polinomio :: derivada()
{
    Polinomio aux (grau - 2);
    for (int i = 1; i < grau; i++)
    {
        aux.constantes[i-1] = i * constantes[i];
    }
    return aux;
}
float Polinomio :: raiz (int valorInicial, int NumeroInteracoes)
{
    Polinomio inicio = (*this);
    Polinomio derivadaInicio;
    derivadaInicio = inicio.derivada();

    float raiz;
    for (int i = 0; i < NumeroInteracoes; i++)
    {
        raiz = valorInicial - inicio.calculo(valorInicial / derivadaInicio.calculo(valorInicial));
        valorInicial = raiz;
    }
    return raiz;
}
float Polinomio :: calculo(float x)
{
    float resposta = 0;
    for (int i = 0; i < grau; i++)
    {
        resposta += constantes[i] * pow(x, i);
    }
    return resposta;
}
