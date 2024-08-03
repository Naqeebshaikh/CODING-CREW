class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // Merge nums2 into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        // Sort the merged array
        for (int i = 0; i < m + n - 1; i++) {
            for (int j = i + 1; j < m + n; j++) {
                if (nums1[i] > nums1[j]) {
                    // Swap
                    int temp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = temp;
                }
            }
        }
    }
}