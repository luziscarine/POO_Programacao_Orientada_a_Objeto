#include <iostream>
using namespace std;

#include <queue>
priority_queue<int> FP;

#include <stdlib.h>

void FilaPMenu();
void FilaPInserir();
void FilaPRemover();
void FilaPTamanho();
void FilaPPelemento();
void FilaElementos();

int main()

{
      FilaPMenu();

      system("pause");
      return 0;
}

void FilaPMenu()
{
int opcao = 0;
    while (opcao != 6)
    {
        cout << "----------------------------------------------" << endl;
        cout << "Fila com prioridade: Escolha uma opcao!" << endl;
        cout << "----------------------------------------------" << endl << endl;

        cout << "1 - Insira um elemento na Fila com prioridade!" << endl;
        cout << "2 - Remova um elemento na Fila com prioridade!" << endl;
        cout << "3 - Tamanho na fila com prioridade!" << endl;
        cout << "4 - Primeiro elemento da fila com prioridade!" << endl;
        cout << "5 - Visualizar elementos da fila!" << endl;
        cout << "6 - Encerrar Programa!" << endl;
        cout << "\nEscolha uma opcao: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            FilaPInserir();
            break;
        case 2:
            FilaPRemover();
            break;
        case 3:
            FilaPTamanho();
            break;
        case 4:
            FilaPPelemento();
            break;
        case 5:
            FilaElementos();
            break;
        case 6:
            cout << "Programa encerrado!" << endl;
            break;
        default:
            cout << "Insira uma opcao valida!" << endl;
        }
    }
}

void FilaPInserir()
{
      int e;
      cout << "Insira um elemento: ";
      cin >> e;
      FP.push(e);
      cout << "\n elemento inserido!" << endl;
}

void FilaPRemover()
{
      if(!FP.empty())
      {
            FP.pop();
            cout << "\n O elemento foi removido!" << endl;
      }
      else 
      {
            cout << "A lista esta vazia!" << endl;
      }
}

void FilaPTamanho()
{
      if(!FP.empty())
      {
            cout << "O tamanho da lista: " << FP.size() << endl;
      }
      else 
      {
            cout << "A lista esta vazia!" << endl;
      } 
}

void FilaPPelemento()
{
      if(!FP.empty())
      {
            cout << "O primeiro elemento da lista: "<< FP.top() << endl;
      }
      else 
      {
            cout << "A lista esta vazia!" << endl;
      } 
}

void FilaElementos()
{
      if (!FP.empty())
      {
            int contador = 1;
            while(!FP.empty())
            {
                  cout << "Elemento " << contador << ": " << FP.top() << endl;
                  contador++;
                  FP.pop();
            }
      }
      else 
      {
            cout << "A lista esta vazia!" << endl;
      }
}