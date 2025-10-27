#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[10];
    cout << "Digite 5 numeros do vetor A:\n";
    for (int i = 0; i < 5; i++) cin >> A[i];
    cout << "Digite 5 numeros do vetor B:\n";
    for (int i = 0; i < 5; i++) cin >> B[i];

    for (int i = 0, j = 0; i < 5; i++) {
        C[j++] = A[i];
        C[j++] = B[i];
    }

    cout << "Vetor intercalado:\n";
    for (int i = 0; i < 10; i++) cout << C[i] << " ";
}
