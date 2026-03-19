#ifndef FREQUENCYTABLE_HPP
#define FREQUENCYTABLE_HPP

#include "DataSet.hpp"

class FrequencyTable {
private:
    int clases;
    int limitesInferior[10];
    int limitesSuperior[10];
    int frecuencia[10];

public:
    void calcular(DataSet ds);
    void imprimir();
};

#endif