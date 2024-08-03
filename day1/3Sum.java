class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> answer = new ArrayList<>();
        int n = nums.length;

        // Check if array length is less than 3
        if (n < 3) {
            return answer;
        }

        // Sort the array to help with detecting duplicates later
        Arrays.sort(nums);

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate elements
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n - 1; j++) {
                // Skip duplicate elements
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                for (int k = j + 1; k < n; k++) {
                    // Skip duplicate elements
                    if (k > j + 1 && nums[k] == nums[k - 1]) {
                        continue;
                    }
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum == 0) {
                        answer.add(Arrays.asList(nums[i], nums[j], nums[k]));
                    }
                }
            }
        }
        return answer;
    }
}