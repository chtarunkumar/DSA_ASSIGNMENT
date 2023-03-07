#include <iostream>
using namespace std;

void findTwoOdd(int arr[], int n) {
    int xor_all = 0, xor_odd = 0, set_bit;
    for(int i = 0; i < n; i++) {
        xor_all = xor_all ^ arr[i];
    }
    set_bit = xor_all & ~(xor_all - 1); // Get the rightmost set bit
    
    // Divide the elements into two groups - one with the rightmost set bit and one without it
    for(int i = 0; i < n; i++) {
        if(arr[i] & set_bit) {
            xor_odd = xor_odd ^ arr[i];
        }
    }
    int xor_even = xor_all ^ xor_odd;
    cout << "The two odd occurring elements are: " << xor_odd << " and " << xor_even << endl;
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
    
    // Find the two odd occurring elements in the array
    findTwoOdd(arr, n);
    
    return 0;
}
