#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  
  int result = x & (x-1); // clear the rightmost set bit of x by AND-ing it with (x-1)
  
  cout << "The new number with the rightmost set bit cleared is " << result << endl;
  
  return 0;
}
