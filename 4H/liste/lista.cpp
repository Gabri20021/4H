#include "lista.h"
#include <iostream>

 using namespace std;

lista::lista() {
    p = nullptr;
}

void lista::inserimentoinTesta(int valore){
    Nodo* nuovonodo = new Nodo;
    nuovonodo->info = valore;
    nuovonodo->next = p;
    p = nuovonodo; 

}

void lista::inserimentoincoda(int valore) {
    Nodo* nuovonodo = new Nodo;
    nuovonodo->info = valore;
    nuovonodo->next = nullptr;
    if(p==nullptr)
    {
        p = nuovonodo;
        return;
    }
    Nodo *l = p;
    while(l->next != nullptr)
    {
        l = l->next;
    }
    l->next= nuovonodo;
}

void lista::cancella(int valore) {
    if (p == nullptr)
    {
        cout<<"vuoto"<< "\n" ;
    }
    if(p->info==valore)
    {
        Nodo *nododaEliminare = p;
        p = p->next;
        delete nododaEliminare;
    }
    Nodo *l = p;
    while(l->next != nullptr || p->info != valore)
    {
        l = l->next;      
    }
    Nodo *s= l->next;
    l->next=s->next;
    delete s;
}