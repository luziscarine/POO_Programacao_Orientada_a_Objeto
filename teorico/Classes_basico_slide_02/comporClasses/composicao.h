#ifndef COMPOSICAO_H_INCLUDED
#define COMPOSICAO_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class Date {
private:
    int dia, mes, ano;
public:
    Date(int, int, int);
    ~Date() {}
    &Date setDia(int);
    &Date setMes(int);
    &Date setAno(int);
};

class Endereco {
private:
    string rua, cidade, estado;
    int numero;
public:
    Endereco(string, string, string, int);
    ~Endereco() {}
    void exibir();
};

class InformacoesPessoais {
private:
    string nome, sobrenome;
    int telefone;
    Date dataNascimento;
    Endereco endereco;
public:
    InformacoesPessoais();
    ~InformacoesPessoais() {}
    void exibir();
};

#endif // COMPOSICAO_H_INCLUDED
