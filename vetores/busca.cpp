#include <iostream>
using namespace std;

int main() {
    int vetor[10], num;
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) cin >> vetor[i];

    cout << "Digite o numero a buscar: ";
    cin >> num;

    bool encontrado = false;
    for (int i = 0; i < 10; i++)
        if (vetor[i] == num)
            encontrado = true;

    if (encontrado)
        cout << "Numero encontrado no vetor!";
    else
        cout << "Numero nao encontrado.";
}
