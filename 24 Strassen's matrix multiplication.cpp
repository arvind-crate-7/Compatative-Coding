#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrix_mult(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n, 0));
    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return C;
    } else {
        // divide matrices into submatrices
        vector<vector<int>> A11(n/2, vector<int>(n/2)), A12(n/2, vector<int>(n/2)), A21(n/2, vector<int>(n/2)), A22(n/2, vector<int>(n/2));
        vector<vector<int>> B11(n/2, vector<int>(n/2)), B12(n/2, vector<int>(n/2)), B21(n/2, vector<int>(n/2)), B22(n/2, vector<int>(n/2));
        for (int i = 0; i < n/2; i++) {
            for (int j = 0; j < n/2; j++) {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j + n/2];
                A21[i][j] = A[i + n/2][j];
                A22[i][j] = A[i + n/2][j + n/2];
                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j + n/2];
                B21[i][j] = B[i + n/2][j];
                B22[i][j] = B[i + n/2][j + n/2];
            }
        }
        // compute 7 products of submatrices
        vector<vector<int>> P1 = matrix_mult(A11, B12 - B22);
        vector<vector<int>> P2 = matrix_mult(A11 + A12, B22);
        vector<vector<int>> P3 = matrix_mult(A21 + A22, B11);
        vector<vector<int>> P4 = matrix_mult(A22, B21 - B11);
        vector<vector<int>> P5 = matrix_mult(A11 + A22, B11 + B22);
        vector<vector<int>> P6 = matrix_mult(A12 - A22, B21 + B22);
        vector<vector<int>> P7 = matrix_mult(A11 - A21, B11 + B12);
        // compute submatrices of C
        vector<vector<int>> C11 = P5 + P4 - P2 + P6;
        vector<vector<int>> C12 = P1 + P2;
        vector<vector<int>> C21 = P3 + P4;
        vector<vector<int>> C22 = P5 + P1 - P3 - P7;
        // combine submatrices of C
        for (int i = 0; i < n/2; i++) {
            for (int j = 0; j < n/2; j++) {
                C[i][j] = C11[i][j];
                C[i][j + n/2] = C12[i][j];
                C[i + n/2][j] = C21[i][j];
                C[i + n/2][j + n/2] = C22[i][j];
            }
        }
        return C;
    }
}

int main(){
    // write code here
}
