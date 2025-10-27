#include <iostream>
using namespace std;

int somaDiagonais(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i]; // diagonal principal
        soma += matriz[i][2 - i]; // diagonal secundária
    }
    return soma;
}

int main() {
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "Soma das diagonais = " << somaDiagonais(matriz);
}
