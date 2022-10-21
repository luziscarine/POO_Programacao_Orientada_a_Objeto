#ifndef PONTOCIRCULOCILINDRO_H_INCLUDED
#define PONTOCIRCULOCILINDRO_H_INCLUDED
#include <iostream>
#define PI 3.1415693
using namespace std;
int Menu();

class Ponto
{
protected:
    float x, y;
public:
    Ponto (float Px = 0, float Py = 0) : x{Px}, y{Py} {}
    virtual ~Ponto() {}

    virtual void ler();
    virtual void exibir() const {cout << "Ponto : C(" << x << "," << y << ")";}

    virtual float area() {return 0;}
    virtual float volume() {return 0;}

    friend istream& operator >> (istream& entrada, Ponto& P);
    friend ostream& operator << (ostream& saida, const Ponto& P);

};

class Circulo: public Ponto
{
protected:
    float raio;
public:
    Circulo(float x = 0, float y = 0, float r = 0) : Ponto{x,y}, raio {r} {}
    ~Circulo() {}

    void ler();
    void exibir() const {Ponto::exibir(); cout << "\nRaio = " << raio;}

    float area() {return PI*raio*raio;}
    float volume() {return 0;}
};

class Cilindro: public Circulo
{
protected:
    float altura;
public:
    Cilindro(float x = 0, float y = 0, float raio = 0, float h = 0) : Circulo {x, y, raio}, altura{h} {}
    ~Cilindro() {}

    void ler();
    void exibir() const {Circulo:: exibir(); cout << "\nAltura: " << altura;}

    float area() {return (2*Circulo::area()) + 2*PI*raio*altura;}
    float volume() {return (Circulo::area()) * altura;}
};

#endif // PONTOCIRCULOCILINDRO_H_INCLUDED
