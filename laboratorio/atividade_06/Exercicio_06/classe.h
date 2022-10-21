#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cmath>
using namespace std;

#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

//------------------------------------------------------------------------ Programa 01 -----------------------------------------------------------------
class Politico
{
protected:
    string nome, partido;
    int numero;
public:
    Politico (string nome, string partido, int numero) : nome{nome}, partido{partido}, numero{numero} {cout << "Building politic..." << endl;}
    ~Politico ();
    void Imprime();
};


class Presidente : public Politico
{
protected:
    string pais;
public:
    Presidente (string nome, string partido, int numero, string pais) : Politico{nome, partido, numero}, pais{pais} {cout << "Building President..." << endl;}
    ~Presidente();
    void Imprime();
};

class Governador : public Presidente
{
protected:
    string estado;
public:
    Governador(string nome, string partido, int numero, string pais, string estado) : Presidente {nome, partido, numero, pais}, estado{estado} {cout << "Building one governator" << endl;}
    ~Governador();
    void Imprime();
};

class Prefeito : public Governador
{
protected:
    string municipio;
public:
    Prefeito(string nome, string partido, int numero, string pais, string estado, string municipio) : Governador {nome, partido, numero, pais, estado}, municipio{municipio} {cout << "Building Mayor..." << endl;}
    ~Prefeito();
    void Imprime();
};




//------------------------------------------------------------------------ Programa 02 -----------------------------------------------------------------

#define PI 3.1415

class Ponto {
protected:
    float x, y;
public:
    Ponto(float Px, float Py);
    ~Ponto();

    void ler();
    void exibir();

    float area();
    float volume();

    friend ostream& operator << (ostream& saida, Ponto& P);
    friend istream& operator >> (istream& entrada, Ponto& P);
};

class Circulo : public Ponto
{
protected:
    float raio;
public:
    Circulo (float Px, float Py, float R): Ponto{Px,Py}, raio {R} {}
    ~Circulo();

    void ler();
    void exibir();

    float area();
    float volume();
};
class Cilindro : public Circulo
{
protected:
    float altura;
public:
    Cilindro (float Px, float Py, float R, float h) : Circulo{Px,Py,R}, altura{h} {}
    ~Cilindro();

    void ler();
    void exibir();

    float area();
    float volume();
};

//------------------------------------------------------------------------ Programa 03 -----------------------------------------------------------------

class Polinomio {
private:
    float *constantes;
    int grau;
public:
    Polinomio();
    Polinomio(int);
    Polinomio (const Polinomio&);
    ~Polinomio();

    Polinomio operator = ( const Polinomio&);
    Polinomio operator + (Polinomio);
    Polinomio operator - (Polinomio);

    float& operator [] (int);

    friend ostream& operator << (ostream&, Polinomio&);
    friend istream& operator >> (istream&, Polinomio&);

    Polinomio derivada();
    float raiz (int valorInicial, int NumeroInteracoes);
    float calculo(float x);
};

//------------------------------------------------------------------------ Programa 04 -----------------------------------------------------------------

class NumeroTelefone
{
private:
    string CodigoDeArea;
    string Troca;
    string Linha;
public:
    friend ostream &operator << (ostream &, const NumeroTelefone);
    friend istream &operator >> (istream &, NumeroTelefone&);
};

#endif // CLASSE_H_INCLUDED




