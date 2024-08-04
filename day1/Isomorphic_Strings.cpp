#include <iostream>
#include <unordered_map>

using namespace std;

bool isIsomorphic(string s, string t) {
    // If the strings are of different lengths, they can't be isomorphic
    if (s.length() != t.length()) {
        return false;
    }

    // Maps to keep track of the character mappings
    unordered_map<char, char> s_to_t;
    unordered_map<char, char> t_to_s;

    for (int i = 0; i < s.length(); ++i) {
        char sc = s[i];
        char tc = t[i];

        // Check if there's already a mapping for sc in s_to_t
        if (s_to_t.find(sc) != s_to_t.end()) {
            // If mapped character doesn't match the current character in t, return false
            if (s_to_t[sc] != tc) {
                return false;
            }
        } else {
            // Otherwise, create a new mapping
            s_to_t[sc] = tc;
        }

        // Check if there's already a mapping for tc in t_to_s
        if (t_to_s.find(tc) != t_to_s.end()) {
            // If mapped character doesn't match the current character in s, return false
            if (t_to_s[tc] != sc) {
                return false;
            }
        } else {
            // Otherwise, create a new mapping
            t_to_s[tc] = sc;
        }
    }

    // If all mappings are consistent, return true
    return true;
}

int main() {
    // Test cases
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";
    
    cout << (isIsomorphic(s1, t1) ? "true" : "false") << endl;  // Output: true
    cout << (isIsomorphic(s2, t2) ? "true" : "false") << endl;  // Output: false
    cout << (isIsomorphic(s3, t3) ? "true" : "false") << endl;  // Output: true
    
    return 0;
}
