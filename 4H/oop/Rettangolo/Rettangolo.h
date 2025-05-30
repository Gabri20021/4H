#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo {
    
    private:

    double altezza;
    double base;

    public:

    Rettangolo() ;
    
    Rettangolo(double parametro) ;

    Rettangolo(double base,double altezza);

    // Distruttore 
    ~Rettangolo();

    double Perimetro();

    double Area() ;

    void stampa();

};
#endif
