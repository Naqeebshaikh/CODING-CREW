class Solution {
    public int maxVowels(String s, int k) {
        int maxVowels = 0;
        int currentVowels = 0;
        int n = s.length();
        for (int i = 0; i < k; i++) {
            if (isVowel(s.charAt(i))) {
                currentVowels++;
            }
        }
        maxVowels = currentVowels;

        for (int i = k; i < n; i++) {
            if (isVowel(s.charAt(i))) {
                currentVowels++;
            }
            if (isVowel(s.charAt(i - k))) {
                currentVowels--;
            }
            maxVowels = Math.max(maxVowels, currentVowels);
        }

        return maxVowels;
    }

    public static boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

}
