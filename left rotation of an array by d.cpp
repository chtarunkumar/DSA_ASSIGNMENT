#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    // Rotate the array by d elements
    for(int i = 0; i < d; i++) {
        int temp = arr[0];
        for(int j = 1; j < n; j++) {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of rotations: ";
    cin >> d;
    
    // Perform left rotation by d elements
    leftRotate(arr, n, d);
    
    cout << "Array after left rotation by " << d << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
