#ifndef LISTA_H
#define LISTA_H

struct Nodo { 
    int info;
    Nodo *next;
};

class lista{
    private:
    Nodo *p;

    public:
    lista();

    void inserimentoinTesta(int valore);
    void inserimentoincoda(int valore);
    void cancella(int valore);

};
#endif