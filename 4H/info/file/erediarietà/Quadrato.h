#ifndef QUADRATO_H
#define QUADRATO_H
#include "Rettangolo.h"

class Quadrato : public Rettangolo{

    private:

    public:

    Quadrato(int l1);
    int Perimetro();
    int Area();
    void stampa();
};

#endif