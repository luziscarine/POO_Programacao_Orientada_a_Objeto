#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <iostream>
#include <stdlib.h>

using namespace std;

class Data {

private:
    int dia;
    int mes;
    int ano;
public:
    Data();
    ~Data() {}

    friend ostream& operator << (ostream& saida,const Data& D);
    friend istream& operator >> (ostream& entrada, Data& D);

};

#endif // DATA_H_INCLUDED
