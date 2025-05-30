#include <iostream>
#include <cmath>
#include "Rettangolo.h"

using namespace std;

    Rettangolo::Rettangolo() {
        base=0;
        altezza=0;
    }
    
    Rettangolo::Rettangolo(double parametro) {
        base=parametro;
        altezza=parametro;
    }

    Rettangolo::Rettangolo(double base,double altezza) {
        this->altezza = altezza;
        this->base = base;
    }

    // Distruttore 
    Rettangolo::~Rettangolo() {
        cout<<"hai chiamato distruttore"<<endl;
    } // Codice per liberare risorse, se necessario std::cout << "Distruttore chiamato, risorse liberate." << std::endl; 
    
    double Rettangolo::Perimetro() {
        return (base + altezza) * 2;
    }

    double Rettangolo::Area() {
        return base * altezza;
    }

    void Rettangolo::stampa() {

        cout<<"Il valore dell'altezza e' "<<altezza<<endl;
        cout<<"Il valore della base e' "<<base<<endl;
        cout<<"Il valore delle perimetro e' "<<Perimetro()<<endl;
        cout<<"Il valore dell'area e' "<<Area()<<endl;
    }

