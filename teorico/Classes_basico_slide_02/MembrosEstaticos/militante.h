#ifndef MILITANTE_H_INCLUDED
#define MILITANTE_H_INCLUDED
#include <iostream>
#include <string>

class Militante {
private:
    string nome;
    string int count;
public:
    Militante(string);
    ~Militante() {}
    void grita();
};

#endif // MILITANTE_H_INCLUDED
