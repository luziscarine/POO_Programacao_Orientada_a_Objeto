#include <iostream>
#include <cmath>
#define PI 3.141593
#include "circulo.h"

Circulo :: Circulo () {
    x = y = 0;
    raio = 1;
}

Circulo :: Circulo (float R, int vx, int vy) {
    raio = R;
    x = vx;
    y = vy;
}

float Circulo :: area() {
    return PI * pow(2, raio);
}

float Circulo :: diametro () {
    return 2 * raio;
}

void Circulo :: setRaio (float r) {
    raio = r;
}

void Circulo :: setOrigem (int x, int y) {
    this -> x = x;
    this -> y = y;
}

float Circulo :: getRaio() {
    return raio;
}
