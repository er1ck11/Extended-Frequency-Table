#include "FrequencyTable.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void FrequencyTable::calcular(DataSet ds) {

    double* datos = ds.getData();
    int n = ds.getSize();

    clases = 6;

    limitesInferior[0] = 25; limitesSuperior[0] = 33;
    limitesInferior[1] = 34; limitesSuperior[1] = 42;
    limitesInferior[2] = 43; limitesSuperior[2] = 51;
    limitesInferior[3] = 52; limitesSuperior[3] = 60;
    limitesInferior[4] = 61; limitesSuperior[4] = 69;
    limitesInferior[5] = 70; limitesSuperior[5] = 78;

    for (int i = 0; i < clases; i++) {
        frecuencia[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < clases; j++) {
            if (datos[i] >= limitesInferior[j] && datos[i] <= limitesSuperior[j]) {
                frecuencia[j]++;
                break;
            }
        }
    }
}

void FrequencyTable::imprimir() {

    int total = 0;
    for (int i = 0; i < clases; i++) {
        total += frecuencia[i];
    }

    int Fa = 0;
    double Fra = 0;

    cout << "\nTABLA DE FRECUENCIAS\n\n";

    cout << "Clase  LimiteClase   f   Xc   Fa   fr   fra   %\n";

    for (int i = 0; i < clases; i++) {

        double Xc = (limitesInferior[i] + limitesSuperior[i]) / 2.0;
        Fa += frecuencia[i];
        double fr = (double)frecuencia[i] / total;
        Fra += fr;
        double porcentaje = fr * 100;

        cout << fixed << setprecision(2);

        cout << i + 1 << "      "
            << limitesInferior[i] << "-" << limitesSuperior[i] << "        "
            << frecuencia[i] << "   "
            << Xc << "   "
            << Fa << "   "
            << fr << "   "
            << Fra << "   "
            << porcentaje << "%\n";
    }

    cout << "\nTOTAL n = " << total << endl;
}