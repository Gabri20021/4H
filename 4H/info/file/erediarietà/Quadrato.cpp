#include "Quadrato.h"
#include "Rettangolo.h"
#include <iostream>

using namespace std;

Quadrato::Quadrato(int l1):Rettangolo(l1,l1)
{
    this->l1 = l1;
}

int Quadrato::Perimetro()
{
    return l1*4;    
}


int Quadrato::Area()
{
    return 0;
}

void Quadrato::stampa() {
    cout << "Primo lato: " << l1 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
}