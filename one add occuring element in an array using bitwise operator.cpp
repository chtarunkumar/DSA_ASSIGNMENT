#include <iostream>
using namespace std;

void findOdd(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    cout << "The odd occurring element is: " << res << endl;
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
    
    // Find the odd occurring element in the array
    findOdd(arr, n);
    
    return 0;
}
