#include <iostream>
using namespace std;

#include <set>
multiset<int> Arvore;

#include <stdlib.h>

void ArvoreMenu();
void ArvoreInserir();
void ArvoreRemoverPersonmalizado();
void imprime();
void ArvoreElementosOrdem();
void ArvoreQuantidadeElementos();
void ArvoreRemoverTodos();
void ArvoreQuantidadeRepetida();

int main()
{
      ArvoreMenu();

      system("pause");
      return 0;
}

void ArvoreMenu()
{
int opcao = 0;
    while (opcao != 7)
    {
        cout << "----------------------------------------------" << endl;
        cout << "Arvore: Escolha uma opcao!" << endl;
        cout << "----------------------------------------------" << endl << endl;

        cout << "1 - Insira um elemento na arvore!" << endl;
        cout << "2 - Remova um elemento com um determinado valor!" << endl;
        cout << "3 - Exiba elementos em ordem!" << endl;
        cout << "4 - Exibir quantidade de elementos!" << endl;
        cout << "5 - Remover todos os elementos!" << endl;
        cout << "6 - Consultar quantidade de elementos com determinado valor!" << endl;
        cout << "7 - Encerrar programa!" << endl;
        cout << "\nEscolha uma opcao: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            ArvoreInserir();
            break;
        case 2:
            ArvoreRemoverPersonmalizado();
            break;
        case 3:
            ArvoreElementosOrdem();
            break;
        case 4:
            ArvoreQuantidadeElementos();
            break;
        case 5:
            ArvoreRemoverTodos();
            break;
      case 6:
            ArvoreQuantidadeRepetida();
            break;
        case 7:
            cout << "Programa encerrado!" << endl;
            break;
        default:
            cout << "Insira uma opcao valida!" << endl;
        }
    }
}

void ArvoreInserir()
{
      int e;
      cout << "Insira um elemento: ";
      cin >> e;
      Arvore.insert(e);
      cout << "Elemento inserido!" << endl;
}

void ArvoreRemoverPersonmalizado()
{
      if (!Arvore.empty())
      {
            int e;
            cout << "Escreva e exclua um elemento: ";
            cin >> e;
            Arvore.erase(e);
            cout << "Elemento removido!" << endl;
      }
      else 
      {
            cout << "Arvore vazia!" << endl;
      }
}

void imprime()
{
      for (auto x : Arvore)
      {
            cout << x << " ";
      }
      cout << endl;
}

void ArvoreElementosOrdem()
{
      if (!Arvore.empty())
      {
            imprime();
      }
      else 
      {
            cout << "Arvore vazia!" << endl;
      }
}

void ArvoreQuantidadeElementos()
{
      if (!Arvore.empty())
      {
            cout << "Numero de elementos: " << Arvore.size() << endl;
      }
      else 
      {
            cout << "Arvore vazia!" << endl;
      }
}

void ArvoreRemoverTodos()
{
      if (!Arvore.empty())
      {
            Arvore.clear();
            cout << "Todos os elementos foram removidos!" << endl;
      }
      else 
      {
            cout << "Arvore vazia!" << endl;
      }
}

void ArvoreQuantidadeRepetida()
{
      if (!Arvore.empty())
      {
            int e;

            cout << "Consulte a quantidade de elementos na arvore inserindo o eleemnto: ";
            cin >> e;

            cout << "Quantidade de elementos: " << Arvore.count(e) << endl;
      }
      else 
      {
            cout << "Arvore vazia!" << endl;
      }
}
