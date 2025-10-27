#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp, convertida;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if (escala == 'F' || escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temp;
        convertida = (temp - 32) * 5.0 / 9.0;
        cout << "Temperatura equivalente em Celsius: " << convertida << endl;
    } else if (escala == 'C' || escala == 'c') {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temp;
        convertida = temp * 9.0 / 5.0 + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << convertida << endl;
    } else {
        cout << "Escala invalida!" << endl;
    }

    return 0;
}
