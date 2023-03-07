#include <iostream>
using namespace std;

int main() {
  int x, i;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter the bit position to find (0-based): ";
  cin >> i;
  
  int mask = 1 << i; // create a mask with a 1 in the i-th bit position
  int bit = (x & mask) >> i; // extract the i-th bit from x using the mask and then shift it to the rightmost position
  
  cout << "The " << i << "-th bit of " << x << " is " << bit << endl;
  
  return 0;
}
