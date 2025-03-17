class Solution {
    public char findTheDifference(String s, String t) {
        int[] frequency = new int[26]; // Array to store frequency of each character

        // Increment counts for characters in string `s`
        for (char c : s.toCharArray()) {
            frequency[c - 'a']++;
        }

        // Decrement counts for characters in string `t`
        for (char c : t.toCharArray()) {
            frequency[c - 'a']--;
        }

        // Find the character with non-zero frequency
        for (int i = 0; i < 26; i++) {
            if (frequency[i] != 0) {
                return (char) ('a' + i);
            }
        }

        return 'a'; // Default return value (in case no extra character is found)
    }
}