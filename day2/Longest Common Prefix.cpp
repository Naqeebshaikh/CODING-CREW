class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    // If the input vector is empty, return an empty string
    if (strs.empty())
      return "";

    // Loop over each character index of the first string
    for (int i = 0; i < strs[0].length(); ++i)
      // Loop over each of the remaining strings in the vector
      for (int j = 1; j < strs.size(); ++j)
        // If we have reached the end of the current string, or characters don't match
        if (i == strs[j].length() || strs[j][i] != strs[0][i])
          // Return the substring of the first string from the start to the current index
          return strs[0].substr(0, i);

    // If no mismatches were found, the entire first string is the common prefix
    return strs[0];
  }
};
