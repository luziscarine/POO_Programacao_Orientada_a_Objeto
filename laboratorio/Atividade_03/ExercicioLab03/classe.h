#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

class Complexo {
private:
    double Numeroreal;
    double Numeroimaginario;
public:
    Complexo();
    Complexo(double, double);
    ~Complexo() {}
    void exibir();
};


#endif // CLASSE_H_INCLUDED
