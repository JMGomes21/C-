#include <iostream>
using namespace std;

int main() {
    int duracaoSegundos, horas, minutos, segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> duracaoSegundos;

    horas = duracaoSegundos / 3600;
    minutos = (duracaoSegundos % 3600) / 60;
    segundos = duracaoSegundos % 60;

    cout << "DURACAO = " << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}
