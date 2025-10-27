#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float largura, comprimento, valorMetro, area, preco;
    cout << "Largura do terreno (m): ";
    cin >> largura;
    cout << "Comprimento do terreno (m): ";
    cin >> comprimento;
    cout << "Valor do metro quadrado: ";
    cin >> valorMetro;

    area = largura * comprimento;
    preco = area * valorMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << " m2\n";
    cout << "Preco do terreno = R$ " << preco << endl;
    return 0;
}
