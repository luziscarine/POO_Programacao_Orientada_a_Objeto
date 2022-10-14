#include "classe07.h"

int main()
{
    Politico P1("Nome", "Partido", 00);
    cout << "#### Construindo um politico ##### \n\n" << endl;
    cout << "Digite as informacoes de um politico \n";
    cin >> P1;
    cout << "\n" << P1;
    return 0;
}
