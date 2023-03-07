#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Initialize a bitset of size 10
    bitset<10> mySet;

    // Add elements to the set
    mySet.set(3);
    mySet.set(5);
    mySet.set(7);

    // Print the elements of the set
    cout << "The elements of the set are: ";
    for(int i = 0; i < mySet.size(); i++) {
        if(mySet.test(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Check if an element is present in the set
    if(mySet.test(5)) {
        cout << "5 is present in the set" << endl;
    }
    else {
        cout << "5 is not present in the set" << endl;
    }

    // Remove an element from the set
    mySet.reset(3);

    // Print the updated set
    cout << "The updated set is: ";
    for(int i = 0; i < mySet.size(); i++) {
        if(mySet.test(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
