#include <iostream>
using namespace std;

int main() {
    double glicose;

    cout << "Digite a quantidade de glicose no sangue (mg/dl): ";
    cin >> glicose;

    if (glicose <= 100.0)
        cout << "Classificacao: Normal" << endl;
    else if (glicose <= 140.0)
        cout << "Classificacao: Elevado" << endl;
    else
        cout << "Classificacao: Diabetes" << endl;

    return 0;
}
