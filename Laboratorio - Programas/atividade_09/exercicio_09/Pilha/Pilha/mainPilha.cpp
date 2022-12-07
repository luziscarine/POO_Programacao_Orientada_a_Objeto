#include "Pilha.h"

int main()
{
      Pilha <int> PI;
      Pilha <char> PC;
      Pilha <float> PF;
      Pilha <Pilha <int> > PPI;

      cin >> PI;
      cout << PI;

      cin >> PC;
      cout << PC;

      cin >> PF;
      cout << PF;

      cin >> PPI;
      cout << PPI;

      system("Pause");
      return 0;
}