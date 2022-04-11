#include <iostream>
#include "Adunare.h"
#include "Calculator.h"
#include "Scadere.h"

int main() {
    Calculator c;
    c += new Adunare();
    //c += new Adunare();
    c += new Scadere();
    c.Compute(15, 6);

    c["adunare"];
   // std::cout << "Numar operatii suportate: " << (int) c << std::endl;

}