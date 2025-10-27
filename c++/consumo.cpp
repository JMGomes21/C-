#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel, consumo;

    cout << "Distancia percorrida (km): ";
    cin >> distancia;
    cout << "Combustivel gasto (L): ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo << " km/l" << endl;
    return 0;
}
