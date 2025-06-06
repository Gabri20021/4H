#ifndef LISTA_H
#define LISTA_H

struct Nodo {
    int info;
    Nodo* next;
};

class Lista 
{
    private:
    Nodo* testa;

    public:
    Lista();
    void inserisciInTesta(int valore);
    int inserisciInCoda(int valore);
    int eliminazione(int valore);
    void cerca(int valore);
    void stampa();
    int contaNodi();
    void rimuoviDuplicati();
};

#endif