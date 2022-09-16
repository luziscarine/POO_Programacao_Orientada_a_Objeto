#ifndef CLASSEBASICO_H_INCLUDED
#define CLASSEBASICO_H_INCLUDED

class Licenca
{
private: // Dados internos
    char licencaTipo;
    int idade;
public: // Dados externos
    Licenca(); //Construtor padrao
    Licenca(char licencaTipo, int idade); // Contrutor personalizado
    ~Licenca() {}

    char printarLicenca();
    int printarIdade();

};

#endif // CLASSEBASICO_H_INCLUDED
