#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void preencher(int matriz[4][4]) {
    srand(time(0));
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[4][4];
    preencher(matriz);
}
