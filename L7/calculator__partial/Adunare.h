#pragma once

#include "Operatii.h";

class Adunare: public Operatii {
  public:
    const char* nume =  "adunare" ;
    int calculate(int, int) override;
};

