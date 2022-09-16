#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

void Fatorial ();
int Primos(int number);
int contador_02 = 0;
void programaTeste();
void printInt( int n, int base );
void Retangulo ();
int Somatorio (int numero);
int numero;
void MDC ();
void numeroBinario ();


int main (void)
{
    int opcao = 0;
    cout << "--------------- Select menu ------------------\n\nOption 0-> Exit\nOption 1-> Factorial calculate\nOption 2-> Primes numbers\nOption 4-> Test program\nOption 5-> Rectangle\nOption 6-> The Sum of integers numbers\nOption 7-> MDC calculator\nOption 8-> Binary number\nOption 9-> Palindrome\n\nSelect one option: ";
    cin >> opcao;

    switch(opcao)
    {
    case 0:
        break;
    case 1:
        Fatorial();
        break;
    case 2:
        for (contador_02 = 1; contador_02 <= 20; contador_02++)
        {
            if (Primos(contador_02) == 1)
                printf("%d - ", contador_02);
        }
        break;
    case 4:
        programaTeste();
        break;
    case 5:
        Retangulo();
        break;
    case 6:
        cout<<"Please write in your keyboard one number and discover the sum or numbers below in your value: ";
        cin >> numero;
        cout << Somatorio(numero) << endl;
        break;
    case 7:
        MDC ();
        break;
    case 8:
        numeroBinario();
        break;
    case 9:
        cout << "Program 09" << endl;
        break;
    }

    return 0;
}

void Fatorial ()
{
    int result = 1, n = 0, i = 0;
    cout << "Please select one number and discover your factorial: ";
    cin >> n;

    if (n >= 2)
    {
        for (i = 2; i <= n; i++)
        {
            result = result * i;
        }
        cout << "The factorial of number " << n << " is " << result <<"!"<< endl;
    }
    else
    {
        cout << "The factorial of number " << n << " is 0!" << endl;
    }

}

int Primos (int number)
{
    int i = 0, contador = 0;

    for (i = 1; i <= number; i++)
    {
        if (number%i == 0)
        {
            contador++;
        }
    }
    if (contador == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void programaTeste()
{
    int n = 100;
    int base = 16;
    printInt(n, base);
}

void printInt( int n, int base )
{
    char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                      '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
                     };
    if(n >= base)
        printInt(n/base, base);
    cout << Array[ n % base ] ;
}

void Retangulo ()
{
    int m = 0, n = 0, i = 0, j = 0, area[m][n];
    cout << "\n\nWrite, in your keyboard, the dimensions of the rectangle \n->Height: ";
    cin >> m;
    cout << "->Width: ";
    cin >> n;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i != 0 && i != m && j != 0)
            {
                cout << "- ";
            }
            else
            {
                cout << "+ ";
            }
        }
        cout << "+ \n";
    }
}

int Somatorio (int numero)
{
    int resultado = 0;
    if ((numero == 0)) return 0;
    resultado = numero + Somatorio(numero - 1);
    return resultado;
}

void MDC ()
{
    int i = 1, x = 0, y = 0, mdc = 0;
    cout << "\nThis program can be calculate the MDC of two numbers!\n\nWrite in your keyboard the first number: ";
    cin >> x;
    cout << "\nWrite the second number: ";
    cin >> y;

    while ( (i <= x) && (i <= y))
    {
        if ( ((x % i) == 0) && ((y % i) == 0) )
        {
            mdc = i;
        }
        i+= 1;
    }
    cout << "The MDC of " << x << " and " << y << " is " << mdc << "!" << endl;

}

void numeroBinario ()
{
    int binario = 0;
    int resto, decimal, i, casas;

    cout << "Please, insert one number in decimal system and discover your correspondent in binary system: ";
    cin >> binario;

    int c = binario, contador = 0;

    while (c > 0)   // Determinando o numero de casas do numero
    {
        c /= 10;
        contador++;
    }

    for (i = 0; i <= contador; i++)
    {
        resto = binario % 10;
        binario /= 10;
        decimal = decimal + resto*pow(2, i);
    }
    cout << "The value in decimal is: " << decimal << endl;
}
