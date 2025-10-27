#include <iostream>
using namespace std;

int main() {
    int vetor[20], pares = 0, impares = 0;
    cout << "Digite 20 numeros:\n";
    for (int i = 0; i < 20; i++) {
        cin >> vetor[i];
        if (vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    cout << "Pares: " << pares << "\nImpares: " << impares;
}
