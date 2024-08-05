#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Function to check if 's' is a subsequence of 't'
    bool isSubsequence(string s, string t) {
        
        // Initialize pointers for both strings
        int i = 0;
        int j = 0;
        
        // Traverse both strings
        while (i < s.length() && j < t.length()) {
            // If characters match, move the pointer for 's'
            if (s[i] == t[j]) {
                i++;
            }
            // Always move the pointer for 't'
            j++;
        }
        
        // If we've traversed all characters in 's', it's a subsequence
        return i == s.length();
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;
    
    // Test cases
    string s1 = "abc";
    string t1 = "ahbgdc";
    
    string s2 = "axc";
    string t2 = "ahbgdc";
    
    // Check and print if s1 is a subsequence of t1
    if (solution.isSubsequence(s1, t1)) {
        cout << s1 << " is a subsequence of " << t1 << endl;
    } else {
        cout << s1 << " is not a subsequence of " << t1 << endl;
    }
    
    // Check and print if s2 is a subsequence of t2
    if (solution.isSubsequence(s2, t2)) {
        cout << s2 << " is a subsequence of " << t2 << endl;
    } else {
        cout << s2 << " is not a subsequence of " << t2 << endl;
    }
    
    return 0;
}
