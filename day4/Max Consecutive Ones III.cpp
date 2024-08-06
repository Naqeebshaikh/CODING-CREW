class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r = 0;  // Right pointer of the window
        int l = 0;  // Left pointer of the window
        int maxlen = 0;  // Maximum length of the subarray
        int zeros = 0;  // Count of zeros in the current window

        // Iterate through the array with the right pointer
        while (r < nums.size()) {
            if (nums[r] == 0) {
                zeros++;  // Increment count of zeros if the current element is 0
            }

            // If the count of zeros exceeds k, move the left pointer to the right
            while (zeros > k) {
                if (nums[l] == 0) {
                    zeros--;  // Decrement count of zeros if the left element is 0
                }
                l++;  // Move the left pointer to the right
            }

            // Calculate the length of the current window and update maxlen
            if (zeros <= k) {
                int len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            r++;  // Move the right pointer to the right
        }
        return maxlen;  // Return the maximum length of the subarray
    }
};
