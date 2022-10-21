#ifndef CLASSE07_H_INCLUDED
#define CLASSE07_H_INCLUDED
#include <iostream>
#include <cstring>
#include "stdlib.h"
using namespace std;

int menu();

class Politico
{
protected:
    string nome, partido, numero;
public:
    Politico(string no = "", string pa = "", string nu = "") : nome{no}, partido{pa}, numero{nu} {cout << "Building Politic... " << endl;}

    virtual void ler();
    virtual void exibir();

    friend ostream& operator << (ostream& entrada, Politico& P);
    friend istream& operator >> (istream& saida, Politico& P);

    virtual ~Politico () { cout << "Destruct politic... " << endl;}
};

class Presidente: public Politico
{
protected:
    string pais;
public:
    Presidente (string nome = "", string partido = "", string numero = "", string pai = "") : Politico {nome, partido, numero}, pais{pai} {cout << "Building president... " << endl;}
    void ler();
    void exibir();

    ~Presidente() { cout << "Destruct president... " << endl;}
};

class Governador: public Presidente
{
protected:
    string estado;
public:
    Governador(string nome = "", string partido = "", string numero = "", string pais = "", string est = "") : Presidente {nome, partido, numero, pais}, estado{est} {cout << "Building governor... " << endl;}
    void ler();
    void exibir();
    ~Governador() { cout << "Destruct governor... " << endl;}
};

class Prefeito: public Governador
{
protected:
    string municipio;
public:
    Prefeito (string nome = "", string partido = "", string numero = "", string pais = "", string estado = "", string cid = "") : Governador {nome, partido, numero, pais, estado}, municipio{cid} {cout << "Destruct Mayor..." << endl;}
    void ler();
    void exibir();
    ~Prefeito() {cout << "Destruct Mayor..." << endl;}
};

#endif // CLASSE07_H_INCLUDED
