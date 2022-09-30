#ifndef PLANOCARTESIANO_H_INCLUDED
#define PLANOCARTESIANO_H_INCLUDED

#include <iostream>
#include <stdlib.h>
using namespace std;

class PlanoCartesiano {
private:
    int x, y;
public:
    PlanoCartesiano();
    ~PlanoCartesiano() {}

    friend ostream& operator << (ostream& saida, PlanoCartesiano& PC);
    friend istream& operator >> (istream& entrada, PlanoCartesiano& PC);

};

#endif // PLANOCARTESIANO_H_INCLUDED
