/*GABRIELE OLAJ          4H*/
#include "lista.h"
#include <iostream>
using namespace std;

int main() {
    Lista lista;

    lista.inserisciInTesta(1);
    lista.inserisciInTesta(2);
    lista.inserisciInTesta(3);

    int a= lista.inserisciInCoda(4);
    lista.inserisciInCoda(5);

    lista.stampa();
    cout << "\n";
    int d = lista.contaNodi();
    cout << "il numero di nodi presente nella lista e' " << d << "\n";
    cout << "\n";
    int c= lista.eliminazione(5);
    lista.stampa();
    cout << "\n";

    lista.cerca(4);
    
    cout << "\n";
    int r = lista.contaNodi();
    cout << "il numero di nodi presente nella lista e' " << r << "\n";

    return 0;
}