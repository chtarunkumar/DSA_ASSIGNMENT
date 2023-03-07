#include <iostream>
using namespace std;

void printSubarray(int arr[], int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void largestSubarray(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    int start = 0, end = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_ending_here + arr[i]) {
            max_ending_here = arr[i];
            start = i;
        }
        else {
            max_ending_here += arr[i];
        }
        if(max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
            end = i;
        }
    }
    cout << "The largest contiguous subarray is: ";
    printSubarray(arr, start, end);
    cout << "Sum of the largest contiguous subarray is: " << max_so_far << endl;
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
    
    // Find the largest contiguous subarray
    largestSubarray(arr, n);
    
    return 0;
}
