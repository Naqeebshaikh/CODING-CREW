class Solution {
    public int strStr(String haystack, String needle) {
        // Length of the haystack and needle
        int haylength = haystack.length();
        int needlelength = needle.length();
        
        // If haystack is shorter than needle, needle cannot be a substring
        if (haylength < needlelength)
            return -1;
        
        // Loop through the haystack, but only up to the point where the remaining part of haystack is at least as long as needle
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            int j = 0;
            
            // Check each character in the needle against the corresponding character in the haystack
            while (j < needle.length() && haystack.charAt(i + j) == needle.charAt(j))
                j++;
            
            // If we have checked all characters in needle and they match, return the starting index
            if (j == needle.length()) {
                return i;
            }
        }
        
        // If no match is found, return -1
        return -1;
    }
}
