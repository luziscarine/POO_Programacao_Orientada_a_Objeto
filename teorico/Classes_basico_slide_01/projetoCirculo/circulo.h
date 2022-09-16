#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo {
private:
    float raio;
    int x;
    int y;
public:
    Circulo (
             );
    Circulo (float, int, int);
    ~Circulo() {}
    float area ();
    float diametro ();
    void setRaio (float r);
    void setOrigem (int x, int y);
    float getRaio ();
};


#endif // CIRCULO_H_INCLUDED
