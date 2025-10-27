#include <iostream>
using namespace std;

void transpor(int matriz[3][2], int transposta[2][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            transposta[j][i] = matriz[i][j];
}

int main() {
    int matriz[3][2] = {{1,2},{3,4},{5,6}};
    int transposta[2][3];
    transpor(matriz, transposta);

    cout << "Matriz transposta:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << transposta[i][j] << " ";
        cout << endl;
    }
}
