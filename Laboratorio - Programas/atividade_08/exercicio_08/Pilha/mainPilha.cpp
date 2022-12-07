#include "Pilha.h"

int main()
{
      Pilha P;
      int aux;

      try
      {
            cin >> P;
            cout << "Valor no topo da pilha: " << P.puxar(aux) << endl;
            cout << P;
      }
      catch (runtime_error & e)
      {
            cout << e.what() << endl;
      }

      system("Pause");
      return 0;
}