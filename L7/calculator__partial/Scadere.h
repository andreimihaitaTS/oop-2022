#pragma once
#include "Operatii.h"
class Scadere : public Operatii {
  public:
    const char* nume = "scadere";
    int calculate(int, int) override;
};