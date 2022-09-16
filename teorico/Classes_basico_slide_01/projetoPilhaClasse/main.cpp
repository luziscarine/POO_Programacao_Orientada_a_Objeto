#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    Pilha p(50);

    cout << "A pilha esta vazia? ";
    if (p.vazio()) cout << "Sim" << endl;
    else cout << "Nao" << endl;

    cout << "Inserindo elementos... " << endl;
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);

    cout << "Elemento do topo:  " << p.top() << endl;
    cout << "Retirando elemento... " << p.pop() << endl;
    cout << "Retirando elemento... " << p.pop() << endl;
    cout << "Elemento do topo: " << p.top() << endl;

    return 0;
}
