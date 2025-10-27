#include <iostream>
using namespace std;

int main() {
    int vetor[10], soma = 0;
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }
    cout << "Soma dos elementos = " << soma;
}
