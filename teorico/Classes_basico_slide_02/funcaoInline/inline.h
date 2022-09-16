#ifndef INLINE_H_INCLUDED
#define INLINE_H_INCLUDED
#include <iostream>

class data {
private:
    int d, m, a;
public:
    data();
    data (int dia, int mes, int ano);
    ~data() {}

    int getDia () {return d;}
    int getMes () {return m;}
    int getAno () {return a;}
    data& printar();

    data& setDia (int value);
    data& setMes (int value);
    data& setAno (int value);

};

#endif // INLINE_H_INCLUDED
