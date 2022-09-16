#ifndef PERSONAGEM_H_INCLUDED
#define PERSONAGEM_H_INCLUDED
#include <iostream>
#include <string>

class Personagem {
public:
    int strength;
    int speed;
    int xp;
    int level;
    void up_level(int I);
private:
    Personagem();
    Personagem(int st, int sp, int I);
    ~Personagem() {}

    void attack (Personagem c);
    int defense (int power);
    void printarInformacoes();
};


#endif // PERSONAGEM_H_INCLUDED
