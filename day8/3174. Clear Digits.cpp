class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        string ans="";
        while(i<s.length()){
            if(!isdigit(s[i])){
                ans = ans+s[i];
            }
            else{
                ans.pop_back();
            }
            i++;
        }
        return ans;
    }
};

Example:
Consider the string "abc3de4f".

Initial string: "abc3de4f"

Processed string (step by step):

i = 0: 'a' is not a digit → ans = "a"
i = 1: 'b' is not a digit → ans = "ab"
i = 2: 'c' is not a digit → ans = "abc"
i = 3: '3' is a digit → remove the last character in ans, so ans = "ab"
i = 4: 'd' is not a digit → ans = "abd"
i = 5: 'e' is not a digit → ans = "abde"
i = 6: '4' is a digit → remove the last character in ans, so ans = "abd"
i = 7: 'f' is not a digit → ans = "abdf"
Final result: "abdf"
