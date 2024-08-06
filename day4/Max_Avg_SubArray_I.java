class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double avg = 0, max = -Double.MAX_VALUE-1;
        if(nums.length==k && k==1){
            max=nums[0];
            return max;
        }
        for (int i = 0; i <= nums.length - k; i++) {
            double sum = 0;
            for (int j = i; j < i+k; j++) {
                sum += nums[j];
            }
            avg = sum / k;
            if (max <= avg) {
                max = avg;
            }
        }
        return max;
    }
}
