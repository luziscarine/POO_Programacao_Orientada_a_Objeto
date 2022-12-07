#include "Polinomio.h"

int main()
{
      Polinomio P1(3), P2(4), P3(4);

      cin >> P1 >> P2;
      cout << P1 << endl;
      cout << P2 << endl;

      P3 = P2 - P1;
      cout << P3 << endl;

      P3 = P2 + P1;
      cout << P3 << endl;

      int i;
      cout << "Entre com um indice: ";
      cin >> i;

      try
      {
            cout << "O coeficiente do grau " << i << " vale: " << P3[i] << endl;  
      }
      catch(out_of_range &OR)
      {
            cout << OR.what() << "Nao e possivel mostrar o coeficiente." << endl;
      }

      system("PAUSE");
      return 0;
}