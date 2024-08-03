class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> hash = new HashMap<>();  //New hashmap is initialised
        int majelement = 0;                                       // stores the element with most occurence ,this gets updated everytime as the array is traversed
        int counts = 0;						// counts number of times the majority element has occured

        for (int n : nums) {
            hash.put(n, 1 + hash.getOrDefault(n, 0));       // updates the number of times the element has appeared in the value with respect to the key
            if (hash.get(n) > counts) {			    // if the element has got more than the number of counts of that element 
                majelement = n;				    // the n variable gets updated to the majelement which has occured most of the time 
                counts = hash.get(n);				// the number of times the element has appeared gets updated using hash get function 
            }
        }

        return majelement;        				// the function returns the majority element 
    }
}