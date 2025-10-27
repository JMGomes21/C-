#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], produto = 0;
    cout << "Digite 5 numeros do vetor A:\n";
    for (int i = 0; i < 5; i++) cin >> A[i];
    cout << "Digite 5 numeros do vetor B:\n";
    for (int i = 0; i < 5; i++) cin >> B[i];

    for (int i = 0; i < 5; i++)
        produto += A[i] * B[i];

    cout << "Produto escalar = " << produto;
}
