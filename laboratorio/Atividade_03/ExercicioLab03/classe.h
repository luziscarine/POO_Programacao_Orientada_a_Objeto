#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include <cmath>
#include <iostream>

using namespace std;

class Complexo
{
private:
    double Numeroreal;
    double Numeroimaginario;
    static int contador;
public:
    Complexo();
    Complexo(double, double);

    Complexo ( const Complexo& C)
    {
        Numeroreal = C.Numeroreal;
        Numeroimaginario = C.Numeroimaginario;
        contador++;
    }

    ~Complexo(void)
    {
        contador--;
    }

    void setarReal(double);
    void setarImaginario(double);

    double pegarReal()
    {
        return Numeroreal;
    }
    double pegarImaginario()
    {
        return Numeroimaginario;
    }

    Complexo Somar (Complexo);
    Complexo Subtrair (Complexo);
    Complexo Produto (Complexo);
    Complexo Dividir (Complexo);

    double Modulo ()
    {
        return (sqrt ( pow(pegarReal(), 2) + pow(pegarImaginario(),2) ));
    }

    friend ostream& operator<<(ostream&, const Complexo&);
    void exibir();
    int visualizarContador ()
    {
        return contador;
    }
};
class LongNumber
{
private:
    int numero[31];
    int contarNumero;

    void IniciarNumeroZeros()
    {
        for (int i = 0; i <= 31; i++)
        {
            numero[i] = 0;
        }
    }

public:
    LongNumber()
    {
        IniciarNumeroZeros();
    }
    ~LongNumber() {}

    void leitura();
    void exibir();

    LongNumber Somar(LongNumber LBS);
    LongNumber Diferenca (LongNumber LBD);
};
class TrianguloRetangulo
{
private:
    int primeiroLado, segundoLado, terceiroLado;
public:
    TrianguloRetangulo();
    TrianguloRetangulo(int pL, int sL,int tL);
    ~TrianguloRetangulo() {}
    friend ostream& operator<<(ostream&, const TrianguloRetangulo&);

    int pegarLadoPrimeiro()
    {
        return primeiroLado;
    }
    int pegarLadoSegundo()
    {
        return segundoLado;
    }
    int pegarLadoTerceiro()
    {
        return terceiroLado;
    }

    void CemPrimeirosTriangulosRetangulos ();
};

#endif // CLASSE_H_INCLUDED
