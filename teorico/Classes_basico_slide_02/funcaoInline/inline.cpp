#include <iostream>
#include "inline.h"

using namespace std;

data :: data()
{
    d = 9;
    m = 10;
    a = 2001;
}

data :: data (int dia, int mes, int ano)
{
    d = dia;
    m = mes;
    a = ano;
}

data& data::setDia (int value)
{
    this -> d = value;
    return *this;
}

data& data::setMes (int value) {
    this -> m = value;
    return *this;
}

data& data::setAno (int value) {
    this -> a = value;
    return *this;
}

data& data::printar() {
    cout << d << "/" << m << "/" << a << endl;
}

