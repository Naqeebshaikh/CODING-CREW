class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        sort(nums.begin(), nums.end());
        int start = 0, end = n-1;
        while(start < end){
            if(nums[start] + nums[end] == k){
                count++;
                start++; end--;
            }

            else if(nums[start] + nums[end] < k){
                start++;
            }

            else if(nums[start] + nums[end] > k){
                end--;
            }
        }
        return count; 
    }
};
