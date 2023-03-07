#include <iostream>
using namespace std;

int main() {
  int x, i;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter the bit position to set (0-based): ";
  cin >> i;
  
  int mask = 1 << i; // create a mask with a 1 in the i-th bit position
  int result = x | mask; // set the i-th bit of x by OR-ing it with the mask
  
  cout << "The new number with the " << i << "-th bit set is " << result << endl;
  
  return 0;
}
