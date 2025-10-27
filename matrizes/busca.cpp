#include <iostream>
using namespace std;

int maiorElemento(int matriz[4][4]) {
    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
    return maior;
}

int main() {
    int matriz[4][4] = {{1,4,3,2},{9,7,6,5},{8,11,0,12},{13,14,15,10}};
    cout << "Maior elemento: " << maiorElemento(matriz);
}
