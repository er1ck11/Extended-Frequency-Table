#ifndef DATASET_HPP
#define DATASET_HPP

class DataSet {
private:
    double data[50];
    int n;

public:
    DataSet();
    double* getData();
    int getSize();
    void printData();
};

#endif