#include <iostream>
#include <string>
#include "militante.h"

using namespace std;

int Militante :: count = 0;

Militante :: Militante( string n ) : nome{n}{
    count++;
}


