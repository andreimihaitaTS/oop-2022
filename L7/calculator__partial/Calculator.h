#pragma once

#include "Operatii.h"
#include <string.h>

class Calculator {
    //const char* numeOperatie[];
    struct pair{
        Operatii* operatie;
        const char* nume;
    };

    pair listaOperatii[101];
    int size;

    public:
    Calculator();
    void Compute(int, int);
    void operator+=(Operatii*);
    bool operator[](const char*);
    const char* getName(int);
};

const char* Calculator::getName(int index) {
    return listaOperatii[index].nume;
}


Calculator::Calculator() {
    size = 0;
}

void Calculator::Compute(int a, int b) {
    for (unsigned i=0;i<size;i++) {
        std::cout << listaOperatii[i].operatie->calculate(a, b) << std::endl;
    }
}

void Calculator::operator+=(Operatii* operatie) {
    listaOperatii[size].nume = operatie.nume;   
    listaOperatii[size++].operatie = operatie;
}

bool Calculator::operator[](const char* sir) {
    //std::cout << "sir " << sir;
    for (unsigned i=0;i<size;i++) {
        std::cout << listaOperatii[i].nume << std::endl;
        //if (strcmp(listaOperatii[i].nume, sir) == 0)
            //return true;
    }
    return false;
}

