class Solution {
    public String reverseWords(String s) {
        // Convert the string to a character array for in-place modifications
        char[] str = s.toCharArray();
        
        // Reverse the entire string
        reverse(str, 0, str.length - 1);
        
        int n = str.length;
        int left = 0;
        int right = 0;
        int i = 0;
        
        while (i < n) {
            // Skip leading spaces
            while (i < n && str[i] == ' ') {
                i++;
            }
            // If we reach the end of the string, break out of the loop
            if (i == n) {
                break;
            }
            // Copy the current word to the correct position
            while (i < n && str[i] != ' ') {
                str[right++] = str[i++];
            }
            // Reverse the current word
            reverse(str, left, right - 1);
            // Add a space after the word
            if (right < n) {
                str[right++] = ' ';
            }
            // Update left to the new start position
            left = right;
        }
        
        // Remove trailing space
        if (right > 0 && str[right - 1] == ' ') {
            right--;
        }
        
        // Convert the character array back to a string
        return new String(str, 0, right);
    }

    // Helper function to reverse a part of the character array
    private void reverse(char[] str, int start, int end) {
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
}
