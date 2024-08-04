#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

bool wordPattern(string pattern, string s) {
    // Split the string `s` into words using stringstream
    istringstream ss(s);
    string word;
    vector<string> words;
    
    // Extract words from the string `s` and store them in a vector
    while (ss >> word) {
        words.push_back(word);
    }
    
    // If the number of words does not match the length of the pattern, return false
    if (pattern.length() != words.size()) {
        return false;
    }
    
    // Create two maps to keep track of the mappings
    unordered_map<char, string> charToWord;  // Maps pattern characters to words
    unordered_map<string, char> wordToChar;  // Maps words to pattern characters
    
    // Iterate through the pattern and the words simultaneously
    for (int i = 0; i < pattern.length(); ++i) {
        char c = pattern[i];  // Current pattern character
        string w = words[i];  // Current word
        
        // Check if the current character is already mapped to a word
        if (charToWord.find(c) != charToWord.end()) {
            // If mapped, but the mapped word does not match the current word, return false
            if (charToWord[c] != w) {
                return false;
            }
        } else {
            // Otherwise, create a new mapping
            charToWord[c] = w;
        }
        
        // Check if the current word is already mapped to a character
        if (wordToChar.find(w) != wordToChar.end()) {
            // If mapped, but the mapped character does not match the current character, return false
            if (wordToChar[w] != c) {
                return false;
            }
        } else {
            // Otherwise, create a new mapping
            wordToChar[w] = c;
        }
    }
    
    // If all mappings are consistent, return true
    return true;
}

int main() {
    // Test cases
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;  // Output: true

    pattern = "abba";
    s = "dog cat cat fish";
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;  // Output: false

    pattern = "aaaa";
    s = "dog cat cat dog";
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;  // Output: false

    pattern = "abba";
    s = "dog dog dog dog";
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;  // Output: false

    return 0;
}
