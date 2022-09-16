#include "classeBasico.h"
#include <iostream>

using namespace std;

Licenca :: Licenca() { // Construtor padrao
    licencaTipo = 'A';
    idade = 18;
}

Licenca :: Licenca (char li, int id) { // Construtor personalizado
    licencaTipo = li;
    idade = id;
}

int Licenca :: printarIdade() {
    return idade;
}

Licenca& Licenca :: printarLicenca() {
    this -> licencaTipo;
    return *this;
}
