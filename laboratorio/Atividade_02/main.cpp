#include <iostream>
#include "retangulo.h"

using namespace std;

void programaTeste01 (); // teste dos metodos dos exercicios de 01 a 04
void programaTeste01porVetor (); // teste do metodo do exercicio 05
void acessoTeste01Vetor(); // teste do metodo do exercicio 05
void acessoTeste02Vetor(); // teste do metodo do exercicio 05
void programaTeste01PonteiroMostraQuadrado (); // teste do metodo do exercicio 06
void programaTeste02 (); // teste dos metodos do exercicio 07
void programaTeste03 (); // teste dos metodos do exercicio 08
void funcaoSomaFracao (); // teste das funcoes metodo do exercicio 08
void funcaoSubtracaoFracao (); // teste das funcoes metodo do exercicio 08
void funcaoProdutoFracao ();  // teste das funcoes metodo do exercicio 08
void funcaoRazaoFracao (); // teste das funcoes metodo do exercicio 08
void funcaoMenorQueFracao (); // teste das funcoes metodo do exercicio 08
void funcaoMaiorQueFracao ();  // teste das funcoes metodo do exercicio 08
void funcaoIgualFracao (); // teste das funcoes metodo do exercicio 08

typedef struct Lista
{
    CRetangulo CR20;
    Lista* proximo;
} Lista;

typedef struct Lista02
{
    CRetangulo CR21;
    Lista02* proximo;
} Lista02;

int main()
{
    int opcao = 0;

    cout << "---------------------- Menu de opcoes ---------------------------------------\n\n1 ---> Programa do Retangulo\n2 ---> Programa do Poligono regular\n3 ---> programa das fracoes\n4 ---> Programa do Retangulo em Vetor\n\nSelecione uma opcao: ";
    cin >> opcao;
    system ("cls");

    switch (opcao)
    {
    case 1:
        programaTeste01();
        break;
    case 2:
        programaTeste02();
        break;
    case 3:
        programaTeste03();
        break;
    case 4:
        programaTeste01porVetor ();
        break;
    default:
        cout << "Selecione uma opcao valida!" << endl;
        break;
    }

    return 0;
}

void programaTeste01 ()
{
    cout << " ------------------------------ Retangulo ------------------------------ \n" << endl;
    /*
    CRetangulo R1(10 , 10);
    CRetangulo R2(9.25,11.15);
    */

    int altura = 0, comprimento = 0;

    cout << "Selecione uma altura: ";
    cin >> altura;
    cout << "Insira um comprimento: ";
    cin >> comprimento;

    CRetangulo R0(comprimento, altura);
    CRetangulo R3;


    cout << "\n\nA area dos retangulos sao: " << endl;
    cout << "Retangulo R0: " << R0.calculoArea() << endl;
    /*
    cout << "Retangulo R1: " << R1.calculoArea() << endl;
    cout << "Retangulo R2: " << R2.calculoArea() << endl;
    */
    cout << "Retangulo R0: " << R3.calculoArea() << endl;

    cout << "\n\nO perimetro dos retangulos sao: " << endl;
    cout << "Retangulo R0: " << R0.calculoPerimetro() << endl;
    /*
    cout << "Retangulo R1: " << R1.calculoPerimetro() << endl;
    cout << "Retangulo R2: " << R2.calculoPerimetro() << endl;
    */
    cout << "Retangulo R0: " << R3.calculoPerimetro() << endl;

    cout << "\n\nVerificando se os retangulos sao quadrados: " << endl;
    cout << "Retangulo R0: " << R0.quadrado() << endl;
    /*
    cout << "Retangulo R1 :" << R1.quadrado() << endl;
    cout << "Retangulo R2 :" << R2.quadrado() << endl;
    */
    cout << "Retangulo R0: " << R3.quadrado() << endl;

    cout << "\n\nVisualizando os retangulos: " << endl;
//    cout << "Retangulo R0: " << R0.mostraRetangulo() << endl;

    R0.mostraRetangulo('-', '+');
    cout << endl;
    R3.mostraRetangulo('-', '+');
    cout << endl;
    programaTeste01PonteiroMostraQuadrado ();
    cout << endl;
}

void programaTeste02 ()
{
    cout << " ----------------------------- Poligono regular --------------------------------------- " << endl;
    float comprimento = 0;
    int lados = 0;

    cout << "\nSelecione o comprimento da aresta do poligono regular: ";
    cin >> comprimento;
    cout << "Selecione o numero de lados do poligono regular: ";
    cin >> lados;

    PoligonosRegulares P0;
    PoligonosRegulares P1(comprimento, lados);

    cout << "\n\nPerimetros dos poligonos regulares: " << endl;
    cout << "P0: " << P0.perimetro() << endl;
    cout << "P1: " << P1.perimetro() << endl;

    cout << "\n\nAreas dos poligonos regulares: " << endl;
    cout << "P0: " << P0.area() << endl;
    cout << "P1: " << P1.area() << endl;

    cout << "\n\nNomes dos poligonos regulares: " << endl;
    cout << "P0: " << P0.nomePoligono() << endl;
    cout << "P1: " << P1.nomePoligono() << endl;
}

void programaTeste03 ()
{
    int opcao;
    cout << "--------------------------------- Menu de opcoes ----------------------------\n\n1 ---> Soma de fracoes\n2 ---> Diferenca de fracoes\n3 ---> Produto de fracoes\n4 ---> Razao de fracoes\n5 ---> Menor Fracao\n6 ---> Maior Fracao\n7 ---> Fracao Igual\n\nEscolha uma opcao: ";
    cin >> opcao;
    system("cls");

    switch (opcao)
    {
    case 1:
        funcaoSomaFracao ();
        break;
    case 2:
        funcaoSubtracaoFracao ();
        break;
    case 3:
        funcaoProdutoFracao ();
        break;
    case 4:
        funcaoRazaoFracao ();
        break;

    case 5:
        funcaoMenorQueFracao ();
        break;

    case 6:
        funcaoMaiorQueFracao ();
        break;

    case 7:
        funcaoIgualFracao ();
        break;
    default:
        cout << "Selecione uma opcao valid seu palhaco! " << endl;
    }
}

void programaTeste01PonteiroMostraQuadrado ()
{
    int c, a;
    cout << "Selecione uma altura: ";
    cin >> a;
    cout << "Insira um comprimento: ";
    cin >> c;

    CRetangulo* R4 = new CRetangulo();
    R4 -> setAltura(a);
    R4 -> setComprimento(c);
    R4 -> mostraRetangulo('-', '+');
}

void funcaoSomaFracao ()
{
    cout << " -------------------------------------- Soma de fracoes ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF1(numerador1, denominador1);
    CFracao CF2(numerador2, denominador2);

    cout << "\n\nSoma de: " << numerador1 << "/" << denominador1 << " + " << numerador2 << "/" << denominador2 << " = " ;
    CF1 = CF1.Somar(CF2);
    CF1.Print();
    cout << endl;
}
void funcaoSubtracaoFracao ()
{
    cout << " -------------------------------------- Diferenca de fracoes ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF5(numerador1, denominador1);
    CFracao CF6(numerador2, denominador2);

    cout << "\n\nSubtracao de: " << numerador1 << "/" << denominador1 << " - " << numerador2 << "/" << denominador2 << endl;
    CF5 = CF5.Subtrair(CF6);
    CF5.Print();
    cout << endl;
}
void funcaoProdutoFracao ()
{
    cout << " -------------------------------------- Produto de fracoes ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF7(numerador1, denominador1);
    CFracao CF8(numerador2, denominador2);
    cout << "\n\nProduto de: " << numerador1 << "/" << denominador1 << " * " << numerador2 << "/" << denominador2 << endl;
    CF7 = CF7.Multiplicar(CF8);
    CF7.Print();
    cout << endl;
}
void funcaoRazaoFracao ()
{
    cout << " -------------------------------------- Razao de fracoes ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF9(numerador1, denominador1);
    CFracao CF10(numerador2, denominador2);

    cout << "\n\nRazao de: " << numerador1 << "/" << denominador1 << " / " << numerador2 << "/" << denominador2 << endl;
    CF9 = CF9.Dividir(CF10);
    CF9.Print();
    cout << endl;
}

void funcaoMenorQueFracao ()
{
    cout << " -------------------------------------- Veja qual Fracao e menor ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF11(numerador1, denominador1);
    CFracao CF12(numerador2, denominador2);

    CF11.MenorQue(CF12);
    CF11.Print();
}
void funcaoMaiorQueFracao ()
{
    cout << " -------------------------------------- Veja qual Fracao e maior ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF13(numerador1, denominador1);
    CFracao CF14(numerador2, denominador2);

    CF13.MaiorQue(CF14);
    CF13.Print();
}
void funcaoIgualFracao ()
{
    cout << " -------------------------------------- Veja qual Fracao e menor ----------------------------------------------\n" << endl;
    int numerador1, denominador1, numerador2, denominador2;

    cout << "Numerador da fracao 01: ";
    cin >> numerador1;
    cout << "Denominador da fracao 01: ";
    cin >> denominador1;
    cout << "Numerador da fracao 02: ";
    cin >> numerador2;
    cout << "Denominador da fraca 02: ";
    cin >> denominador2;

    CFracao CF15(numerador1, denominador1);
    CFracao CF16(numerador2, denominador2);

    CF15.Igual(CF16);
    CF15.Print();
}

void acessoTeste01Vetor()
{
    int c, h;

    cout << "Comprimento: ";
    cin >> c;
    cout << "Altura: ";
    cin >> h;

    Lista *L2 = new Lista();
    Lista *aux = new Lista();
    aux -> CR20.setAltura(h);
    aux -> CR20.setComprimento(c);
    L2 -> proximo = aux;
    L2 -> proximo -> CR20.mostraRetangulo('-', '+');
}

void acessoTeste02Vetor()
{
    int c, h;

    cout << "Comprimento: ";
    cin >> c;
    cout << "Altura: ";
    cin >> h;

    Lista02 *L1 = new Lista02();
    Lista02 *aux = new Lista02();
    aux -> CR21.setAltura(h);
    aux -> CR21.setComprimento(c);
    L1 -> proximo = aux;
    L1 -> proximo -> CR21.mostraRetangulo('-', '+');
}

void programaTeste01porVetor ()
{
    int opcao;
    cout << "\n1 ---> Opcao 01\n2 ---> opcao 02\n\nEscolha uma opcao: ";
    cin >> opcao;
    switch (opcao)
    {
    case 1:
        acessoTeste01Vetor();
        break;
    case 2:
        acessoTeste02Vetor();
        break;
    default:
        cout << "Escolha uma opcao valida!" << endl;
        break;
    }
}

