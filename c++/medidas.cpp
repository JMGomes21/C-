#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cout << "Digite as tres medidas A, B e C: ";
    cin >> A >> B >> C;

    double areaQuadrado = A * A;
    double areaTriangulo = (A * B) / 2.0;
    double areaTrapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << areaQuadrado << endl;
    cout << "AREA DO TRIANGULO = " << areaTriangulo << endl;
    cout << "AREA DO TRAPEZIO = " << areaTrapezio << endl;

    return 0;
}
