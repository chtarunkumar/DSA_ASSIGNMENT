#include <iostream>
using namespace std;

int main() {
  int x, i;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter the bit position to clear (0-based): ";
  cin >> i;
  
  int mask = ~(1 << i); // create a mask with a 0 in the i-th bit position
  int result = x & mask; // clear the i-th bit of x by AND-ing it with the mask
  
  cout << "The new number with the " << i << "-th bit cleared is " << result << endl;
  
  return 0;
}
