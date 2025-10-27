#include <iostream>
using namespace std;

void multiplicar(int A[2][2], int B[2][2], int C[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    int A[2][2] = {{1,2},{3,4}};
    int B[2][2] = {{2,0},{1,2}};
    int C[2][2];
    multiplicar(A,B,C);

    cout << "Resultado:\n";
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}
