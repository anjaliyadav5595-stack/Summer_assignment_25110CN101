
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    
    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of Matrix 2: ";
    cin >> c2; // c2 only, because r2 must = c1
    r2 = c1; // to make multiplication valid

    int A[r1][c1], B[r2][c2], C[r1][c2] = {0};

    cout << "\nEnter elements of Matrix 1 [" << r1 << "x" << c1 << "]:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "\nEnter elements of Matrix 2 [" << r2 << "x" << c2 << "]:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Matrix Multiplication: C = A * B
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResult Matrix [" << r1 << "x" << c2 << "]:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << C[i][j] << "\t";
        cout << "\n";
    }
    return 0;
}
