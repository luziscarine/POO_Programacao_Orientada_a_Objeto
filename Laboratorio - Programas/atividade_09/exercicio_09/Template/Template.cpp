#include "Template.h"

int main()
{
      Vetor<int> T1(5);
      Vetor<float> T2(3);

      cin >> T1;
      cout << "T1 desordenado" << T1 << endl;
      T1.ordena();
      cout << "T1 ordenado> " << T1 << endl;

      cin >> T2;
      cout << "T2 desordenado" << T2 << endl;
      T2.ordena();
      cout << "T1 ordenado> " << T2 << endl;

      system("Pause");
      return 0;
}