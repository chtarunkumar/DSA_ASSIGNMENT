#include <iostream>
using namespace std;

void cyclicRotate(int arr[], int n) {
    int temp = arr[n - 1];
    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Perform cyclic rotation by one element
    cyclicRotate(arr, n);
    
    cout << "Array after cyclic rotation by one element:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
