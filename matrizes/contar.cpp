#include <iostream>
using namespace std;

int contar(int matriz[4][4], int numero) {
    int cont = 0;
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            if (matriz[i][j] == numero)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4] = {{1,2,3,4},{5,2,7,8},{9,2,11,12},{13,14,2,16}};
    int n;
    cout << "Digite o número a procurar: ";
    cin >> n;
    cout << "O número aparece " << contar(matriz,n) << " vezes.";
}
