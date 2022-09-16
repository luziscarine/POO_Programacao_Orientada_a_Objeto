#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

class Complexo {
private:
    double Numeroreal;
    double Numeroimaginario;
    static int contador;
public:
    Complexo();
    Complexo(double, double);
    Complexo ( const Complexo& C) {
        Numeroreal = C.Numeroreal;
        Numeroimaginario = C.Numeroimaginario;
        contador++;
    }
    ~Complexo(void) {contador--;}

    void setReal(double);
    void setImaginario(double);

    double getReal() { return Numeroreal; }
    double getImaginario() { return Numeroimaginario; }

    Complexo Somar (Complexo);
    Complexo Subtrair (Complexo);
    Complexo Produto (Complexo);
    Complexo Dividir (Complexo);

    void exibir();
};

class LongNumber {
private:
    int numero[30];
public:
    LongNumber();
    LongNumber(int);
    ~LongNumber() {}

    void exibir();
};

class TrianguloRetangulo {
private:
public:
    TrianguloRetangulo();

    ~TrianguloRetangulo() {}
    void exibir();
};

#endif // CLASSE_H_INCLUDED
