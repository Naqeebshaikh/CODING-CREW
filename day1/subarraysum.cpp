// Problem: Given an array of integers nums and an integer k, count the number of continuous subarrays (contiguous segments of the array) whose sum equals k.

// Example:

// Input: nums = [1, 1, 1], k = 2
// Output: 2
// Explanation: The subarrays [1, 1] and [1, 1] both have a sum of 2.
// Approach to Solve the Problem
// Initialization:

// Start with a count variable (cnt) set to 0 to keep track of the number of subarrays that sum up to k.
// Nested Loops:

// Use two nested loops:
// The outer loop fixes the starting index of the subarray.
// The inner loop iterates through the elements from the current starting index to the end of the array, calculating the sum of the subarray.
// Check the Sum:

// For each subarray sum, check if it equals k. If it does, increment the count.
// Return Result:

// After processing all possible subarrays, return the total count.

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;  
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;  // Variable to store the sum of the current subarray
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];  // Add the current element to the sum
                // Check if the current sum is equal to the desired sum k
                if (sum == k) {
                    cnt++;  // Increment the count if sum equals k
                }
            }
        }
        return cnt;  
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    int result = solution.subarraySum(nums, k);
    cout << "Number of subarrays that sum to " << k << " is: " << result << endl;
    return 0;
}
