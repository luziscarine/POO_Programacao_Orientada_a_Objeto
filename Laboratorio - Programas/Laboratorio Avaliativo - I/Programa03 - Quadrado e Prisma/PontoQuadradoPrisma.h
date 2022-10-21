#ifndef PONTOQUADRADOPRISMA_H_INCLUDED
#define PONTOQUADRADOPRISMA_H_INCLUDED
#define PI 3.1415693
#include <iostream>

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

    virtual float area() const {return 0;}
    virtual float volume() const {return 0;}

    friend istream& operator >> (istream& entrada, Ponto& P);
    friend ostream& operator << (ostream& saida, const Ponto& P);

};

class Quadrado: public Ponto
{
protected:
    float lado;
public:
    Quadrado(float x = 0, float y = 0, float l = 0) : Ponto{x,y}, lado {l} {}
    ~Quadrado() {}

    void ler();
    void exibir() const {Ponto::exibir(); cout << "\nLado = " << lado;}

    float area() const {return lado*lado;}
    float volume() const {return 0;}

};

class Circulo: public Ponto
{
protected:
    float raio;
public:
    Circulo(float x = 0, float y = 0, float r = 0) : Ponto{x,y}, raio {r} {}
    ~Circulo() {}

    void ler();
    void exibir() const {Ponto::exibir(); cout << "\nRaio = " << raio; }

    float area() const {return PI*raio*raio;}
    float volume() const {return 0;}
};

class Prisma: public Quadrado
{
protected:
    float altura;
public:
    Prisma(float x = 0, float y = 0, float lado = 0, float l = 0) : Quadrado{x,y, lado}, altura {l} {}
    ~Prisma() {}

    void ler();
    void exibir() const {Quadrado::exibir(); cout << "\nAltura = " << altura;}

    float area() const {return ((Quadrado::area()) + lado*lado);}
    float volume() const {return (Quadrado::area() * altura);}

};

class Cilindro: public Circulo
{
protected:
    float altura;
public:
    Cilindro(float x = 0, float y = 0, float raio = 0, float h = 0) : Circulo {x, y, raio}, altura{h} {}
    ~Cilindro() {}

    void ler();
    void exibir() const {Circulo:: exibir(); cout << "\nAltura: " << altura; cout << volume() << endl;}

    float area() const {return (2*Circulo::area()) + 2*PI*raio*altura;}
    float volume()const {return (Circulo::area()) * altura;}
};



#endif // PONTOQUADRADOPRISMA_H_INCLUDED
