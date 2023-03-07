#include <iostream>
using namespace std;

void spiralTraversal(int m, int n, int arr[][100]) {
    int row_start = 0, row_end = m - 1, col_start = 0, col_end = n - 1;
    while(row_start <= row_end && col_start <= col_end) {
        // Print the first row from the remaining rows
        for(int i = col_start; i <= col_end; i++) {
            cout << arr[row_start][i] << " ";
        }
        row_start++;
        
        // Print the last column from the remaining columns
        for(int i = row_start; i <= row_end; i++) {
            cout << arr[i][col_end] << " ";
        }
        col_end--;
        
        // Print the last row from the remaining rows
        if(row_start <= row_end) {
            for(int i = col_end; i >= col_start; i--) {
                cout << arr[row_end][i] << " ";
            }
            row_end--;
        }
        
        // Print the first column from the remaining columns
        if(col_start <= col_end) {
            for(int i = row_end; i >= row_start; i--) {
                cout << arr[i][col_start] << " ";
            }
            col_start++;
        }
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> m >> n;
    int arr[100][100];
    cout << "Enter the elements of the matrix: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Print the spiral traversal of the matrix
    cout << "Spiral Traversal of Matrix: ";
    spiralTraversal(m, n, arr);
    cout << endl;
    
    return 0;
}
