#include <iostream>
#include "inline.h"

using namespace std;

int main()
{
    int dia, mes, ano;
    data d1;

    cout << "Dia de nascimento: ";  cin >> dia;
    cout << "Mes de nascimento: "; cin >> mes;
    cout << "Ano de nascimento: "; cin >> ano;

    d1.setDia(dia).setMes(mes).setAno(ano);
    d1.printar();

    return 0;
}
