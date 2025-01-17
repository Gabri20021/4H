#include "Pulsante.h"

using namespace std;

Pulsante::Pulsante(int piedino)
{
     pin = piedino;
      pinMode(pin, INPUT_PULLUP);
}


bool Pulsante::premi() 
{
    return digitalRead(pin) == LOW;
}