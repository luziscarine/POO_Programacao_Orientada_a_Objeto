#ifndef CLASSE07_H_INCLUDED
#define CLASSE07_H_INCLUDED
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Politico
{
protected:
    string nome, partido;
    int numero;
public:
    Politico (string No, string Pa, int Nu) : nome{No}, partido{Pa}, numero {Nu} {cout << "Contruindo um politico..." <<endl;}
    virtual ~Politico() {cout << "Destruindo politico... " << endl;} // Poliformismo

    virtual void ler(); // Poliformismo
    virtual void exibir(); // Poliformismo

    friend ostream& operator << (ostream&, Politico& P);
    friend istream& operator >> (istream&, Politico& P);
};

class Presidente: public Politico
{
protected:
    string pais;
public:
    Presidente(string nome, string partido, int numero, string pais) : Politico{nome, partido, numero}, pais{pais} {cout << "Construindo um presidente... " << endl;}
    ~Presidente() {cout << "Destruindo um presidente... " << endl;}
    void ler();
    void exibir();
};

class Governador : public Presidente
{
protected:
    string estado;
public:
    Governador (string nome, string partido, int numero, string pais, string estado) : Presidente{nome, partido, numero, pais}, estado{estado} {cout << "Construindo um governador..." << endl;}
    ~Governador () {cout << "Destruindo um governador... " << endl;}

    void ler();
    void exibir();
};


class Prefeito : public Governador
{
protected:
    string municipio;
public:
    Prefeito (string nome, string partido, int numero, string pais, string estado, string municipio) : Governador{nome, partido, numero, pais, estado}, municipio{municipio} {cout << "Construindo um Prefeito..." << endl;}
};

#endif // CLASSE07_H_INCLUDED
