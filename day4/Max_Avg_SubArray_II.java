class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum = 0;
        
        for (int i = 0; i < k; i++) {
        sum+=nums[i];
        }
          double max=sum; 
            for (int j = 1; j <=nums.length-k; j++) {
                sum=sum-nums[j-1]+nums[j+k-1];
            
            if (max <= sum) {
                max = sum;
            }
            }
        return max/k;
    }
}
