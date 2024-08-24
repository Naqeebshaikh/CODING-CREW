class Solution {
public:
    // Function to convert an Excel column title to a column number
    int titleToNumber(string columnTitle) {
        int result = 0;
        // Iterate over each character in the column title
        for (int i = 0; i < columnTitle.size(); i++) {
            // Shift the result by multiplying it by 26 (since there are 26 letters in the alphabet)
            result = result * 26;
            // Convert the current character to its corresponding value and add it to result
            // 'A' corresponds to 1, 'B' to 2, ..., 'Z' to 26
            result = result + (columnTitle[i] - 'A' + 1);
        }
        return result;  // Return the final computed column number
    }
};
