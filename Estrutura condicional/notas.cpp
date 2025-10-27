#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    media = nota1 + nota2;

    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << media << endl;

    if (media < 60.0)
        cout << "REPROVADO" << endl;

    return 0;
}
