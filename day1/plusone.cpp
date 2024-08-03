// Problem: You are given a large integer represented as an array of digits, where each digit is in the range [0, 9]. The most significant digit is at the head of the list, and each element in the array contains a single digit. The large integer does not contain any leading 0 except the number 0 itself.

// You need to increment the integer by one and return the resulting array of digits.

// Example:

// Input: [1, 2, 3]

// Output: [1, 2, 4]

// Input: [4, 3, 2, 1]

// Output: [4, 3, 2, 2]

// Input: [9, 9, 9]

// Output: [1, 0, 0, 0]

// Approach to Solve the Problem
// Initialization: Start by determining the size of the array.

// Loop from End to Start:

// Iterate through the digits starting from the least significant digit (rightmost) to the most significant digit (leftmost).
// Handling Non-9 Digits:

// If the current digit is less than 9, increment it by 1 and return the array, as no further processing is needed.
// Handling 9 Digits:

// If the current digit is 9, set it to 0 and continue to the next digit. This is because 9 + 1 results in 10, which requires a carry over.
// Handling All 9s:

// If all digits are 9, after the loop completes, the array will be all 0s. Insert a 1 at the beginning of the array to account for the carry over.
// Return Result: Return the modified array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();  
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        // Handle the carry over when all digits are 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution solution;
    vector<int> digits = {9, 9, 9};
    vector<int> result = solution.plusOne(digits);
    cout << "Result after adding one: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;
    return 0;
}
