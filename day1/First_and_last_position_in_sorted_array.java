class Solution {
    public int[] searchRange(int[] nums, int target) {
        int i = 0;                            // initialise the variable for index
        int j = nums.length-1;			// initialise the variable with length of the given array
        int len[] = {-1 , -1};			// initialise the array which is to be returned with {-1,-1} as both elements are not found in the start
        if(nums.length == 1)			//start with checking if the array has one element
        {
            if(nums[0] == target) 		// if the target element is at 0th index
            {
                return new int[]{0, 0};			// return the index (0,0)
            }
            return new int[]{-1, -1};			//return {-1,-1} as nothing is found
        }
        while(i <= j)				// use while loop till i is lesser than j
        {
            if(nums[i] != target)		// iterate through index values and look for the target 
            {
                i++;				
            }
            if(nums[j] != target)		// iterate reverse also 
            {
                j--;
            }
            if(nums[i] == target && nums[j] == target)		// if the target is found 
            {
                len[0] = i;			// update the index with the index of array in which the target element was found
                len[1] = j;			// update even other value with j index
                break;
            }
        }
        return len;				// return the array value.
    }
}