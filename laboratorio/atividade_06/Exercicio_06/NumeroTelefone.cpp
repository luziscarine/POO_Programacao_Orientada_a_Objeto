#include "classe.h"

ostream &operator << (ostream& saida, const NumeroTelefone NT)
{
    saida << "(" << NT.CodigoDeArea << ") " << NT.Troca << "-" << NT.Linha;
    return saida;
}
istream &operator >> (istream & entrada, NumeroTelefone& NT)
{

}
