#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED
class lista {
private:
    lista*pre;
    lista* suc;
    int data;
public:
    lista(lista* p, lista* s, int d) : pre{p}, suc{s}, data{d} {}

    lista insert(int x) {
        return pre = new lista{pre, this, x}
    }
};


#endif // LISTAENCADEADA_H_INCLUDED
