#include "DataSet.hpp"
#include <iostream>

using namespace std;

DataSet::DataSet() {

    n = 31;

    double temp[31] = {
        25,27,29,30,
        34,36,38,40,
        43,45,46,47,48,49,50,51,
        52,55,56,57,58,60,62,
        61,63,65,67,69,
        70,74,78
    };

    for (int i = 0; i < n; i++) {
        data[i] = temp[i];
    }
}

double* DataSet::getData() {
    return data;
}

int DataSet::getSize() {
    return n;
}

void DataSet::printData() {
    cout << "\nDataSet:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}