#ifndef RETANGULO_H
#define RETANGULO_H

#include <string>
#include <iostream>

using namespace std;

class CRetangulo
{
private:
    int altura;
    int comprimento;
public:
    CRetangulo();
    CRetangulo(int h, int c);
    ~CRetangulo()
    {
        cout << endl;
        cout << "Destruindo retangulo... " << endl;
    }

    void setComprimento(int c);
    void setAltura(int h);
    int getAltura();
    int getComprimento();

    int calculoArea();
    int calculoPerimetro();
    bool quadrado();
    void mostraRetangulo(char b, char p);

};

class PoligonosRegulares
{
private:
    int b;
    int n;
public:
    PoligonosRegulares();
    PoligonosRegulares(int b, int n);
    ~PoligonosRegulares()
    {
        cout << endl;
        cout << "Destruindo poligono..." << endl;
    }

    int getComprimento();
    int getLados();
    void setComprimento(int b);
    void setLados(int n);

    int area();
    int perimetro();
    string nomePoligono();

};

class CFracao
{

protected:
    int m_numerador;
    int m_denominador;
    CFracao Reduzida(void);
public:

    CFracao(void)
    {
        m_numerador = 1;
        m_denominador = 1;
    }
    CFracao(int Num, int Denom) : m_numerador(Num),
        m_denominador(Denom) { };
    CFracao( const CFracao& f)
    {
        m_numerador = f.m_numerador;
        m_denominador = f.m_denominador;
    }
    ~CFracao(void) { };

    int getNumerador(void)
    {
        return m_numerador;
    }
    int getDenominador(void)
    {
        return m_denominador;
    }

    CFracao Somar(CFracao _F);
    CFracao Subtrair(CFracao _F);
    CFracao Multiplicar(CFracao _F);
    CFracao Dividir(CFracao _F);
    int MenorQue(CFracao _Fracao);
    int MaiorQue(CFracao _Fracao);
    int Igual(CFracao _Fracao);

    float ComoFloat(void);

    void Print(void);

};

#endif // atividade_02_classes_INCLUDED
