#include <iostream>
#include "classeBasico.h"

using namespace std;

int main()
{
    Licenca L1;
    Licenca L2('D', 30);

    cout << "------------------- Dados dos motoristas ---------------------" << endl;
    cout << "Motorista 01\nIdade: " << L1.printarIdade () << endl;
    cout << "\n\nMotorista 02\nIdade: " << L2.printarIdade () << endl;

    return 0;
}
