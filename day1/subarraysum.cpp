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
