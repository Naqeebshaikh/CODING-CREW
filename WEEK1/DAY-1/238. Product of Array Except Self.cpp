#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Initialize left and right product arrays with 1
        vector<int> leftProducts(n, 1);
        vector<int> rightProducts(n, 1);
        vector<int> result(n);

        // Calculate left products
        for (int i = 1; i < n; i++) {
            leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
        }

        // Calculate right products
        for (int i = n - 2; i >= 0; i--) {
            rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
        }

        // Multiply left and right products to get the final result
        for (int i = 0; i < n; i++) {
            result[i] = leftProducts[i] * rightProducts[i];
        }

        return result;
    }
};

// Function to print the result vector
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    
    // Get the result of productExceptSelf
    vector<int> result = sol.productExceptSelf(nums);
    
    // Output the result
    cout << "Input array: ";
    printVector(nums);
    cout << "Product except self: ";
    printVector(result);
    
    return 0;
}
