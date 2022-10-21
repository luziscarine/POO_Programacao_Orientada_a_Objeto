#include <iostream>
using namespace std;

int palindromo(int pal);

int main() {

    int p = 1223;

    if (palindromo(p) == 1) {
        cout << "\nThis is palindrome!" << endl;
    } else {
        cout << "\nThis is not palindrome!" << endl;
    }


    return 0;
}
int palindromo(int pal) {

    int i, contador, palindrome = pal;

    while (pal > 0) {
        pal /= 10;
        contador++;
    }
    int vetor[contador];

    for (i = contador -1; i>= 0; i++){
        vetor[i] = pal % 10;
        pal /= 10;
    }


    for (i = 0; i < contador; i++) {
        cout << vetor[i];
    }

    for (i = 0; i < contador/2; i++) {
        if (vetor[i] != vetor[contador - 1 - i])
            return 0;
    }

    return 1;
}
