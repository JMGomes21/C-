#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r, area;
    const double PI = 3.14159;

    cout << "Digite o valor do raio: ";
    cin >> r;

    area = PI * pow(r, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
