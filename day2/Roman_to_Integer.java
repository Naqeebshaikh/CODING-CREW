class Solution {
    public int romanToInt(String s) {
        int answer = 0;
        for (int i = 0; i < s.length(); i++) {
            char a = s.charAt(i);
            if (a == 'I') {
                if (i + 1 < s.length() && (s.charAt(i + 1) == 'V' || s.charAt(i + 1) == 'X')) {
                    answer -= 1;
                } else {
                    answer += 1;
                }
            } else if (a == 'V') {
                answer += 5;
            } else if (a == 'X') {
                if (i + 1 < s.length() && (s.charAt(i + 1) == 'L' || s.charAt(i + 1) == 'C')) {
                    answer -= 10;
                } else {
                    answer += 10;
                }
            } else if (a == 'L') {
                answer += 50;
            } else if (a == 'C') {
                if (i + 1 < s.length() && (s.charAt(i + 1) == 'D' || s.charAt(i + 1) == 'M')) {
                    answer -= 100;
                } else {
                    answer += 100;
                }
            } else if (a == 'D') {
                answer += 500;
            } else if (a == 'M') {
                answer += 1000;
            }
        }
        return answer;
    }
}
