#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& subset, int start, vector<vector<int>>& subsets) {
    subsets.push_back(subset);
    for(int i = start; i < nums.size(); i++) {
        subset.push_back(nums[i]);
        generateSubsets(nums, subset, i + 1, subsets);
        subset.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter the size of the set: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the set: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> subset;
    vector<vector<int>> subsets;
    
    // Generate all the subsets of the given set
    generateSubsets(nums, subset, 0, subsets);
    
    // Print all the subsets
    cout << "The subsets of the given set are: " << endl;
    for(auto s : subsets) {
        for(auto num : s) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
