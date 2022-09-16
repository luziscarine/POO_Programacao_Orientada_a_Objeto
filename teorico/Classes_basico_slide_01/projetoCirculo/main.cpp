#include <iostream>
#include "circulo.h"

using namespace std;

int main()
{
    Circulo C0;
    Circulo C1 (1.5, 2, 3);
    Circulo C2 (3.0, 4 , 5);

    cout << "Area dos circulos: " << endl;
    cout << "C0 = " << C0.area() << endl;
    cout << "C1 = " << C1.area() << endl;
    cout << "C2 = " << C2.area() << endl;


    return 0;
}
