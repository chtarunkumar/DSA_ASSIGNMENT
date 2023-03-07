#include <iostream>
using namespace std;

int main() {
    int n; // number of piles
    cout << "Enter the number of piles: ";
    cin >> n;

    int piles[n]; // array to store the number of stones in each pile
    for(int i = 0; i < n; i++) {
        cout << "Enter the number of stones in pile " << i+1 << ": ";
        cin >> piles[i];
    }

    // calculate the XOR of all the pile sizes
    int nim_sum = 0;
    for(int i = 0; i < n; i++) {
        nim_sum ^= piles[i];
    }

    // if the XOR sum is 0, then the second player wins, otherwise the first player wins
    if(nim_sum == 0) {
        cout << "The second player wins" << endl;
    }
    else {
        cout << "The first player wins" << endl;
    }

    return 0;
}
