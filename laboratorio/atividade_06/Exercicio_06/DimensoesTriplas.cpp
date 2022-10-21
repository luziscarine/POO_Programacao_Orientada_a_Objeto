#include "classe.h"

Ponto :: Ponto(float Px, float Py)
{
    x = Px; y = Py;
}
Ponto :: ~Ponto()
{

}
void Ponto :: ler()
{
    cin >> x >> y;
}
void Ponto :: exibir()
{
    cout << "Coordenada : (" << x << " , " << y << ")" << endl;
}
float Ponto :: area()
{
    return 0;
}
float Ponto :: volume()
{
    return 0;
}

ostream& operator << (ostream& saida, Ponto& P)
{
    P.exibir();
    return saida;
}

istream& operator >> (istream& entrada, Ponto& P)
{
    P.ler();
    return entrada;
}

Circulo :: ~Circulo()
{

}
void Circulo :: ler()
{
    cin >> x >> y >> raio;
}
void Circulo :: exibir()
{
    Ponto :: exibir();
    cout << "Raio: " <<  raio;
}
float Circulo :: area()
{
    return PI*raio*raio;
}
float Circulo :: volume()
{
    return 0;
}

Cilindro :: ~Cilindro()
{

}
void Cilindro :: ler()
{
    cin >> x >> y >> raio >> altura;
}
void Cilindro ::  exibir()
{
    Circulo :: exibir();
    cout << "Altura: " << altura << endl;
}
float Cilindro ::  area()
{
    return PI*raio*raio;
}
float Cilindro :: volume()
{
    return PI*raio*raio*altura;
}
