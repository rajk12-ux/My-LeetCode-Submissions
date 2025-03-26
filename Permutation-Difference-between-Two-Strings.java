class Solution {
    public int findPermutationDifference(String s, String t) {
        int[] p = new int[26]; 
        for (int i = 0; i < s.length(); i++) {
            p[s.charAt(i) - 'a'] = i;
        }
        int sumd = 0; 
        for (int i = 0; i < t.length(); i++) {
            sumd += Math.abs(p[t.charAt(i) - 'a'] - i); // Calculate and sum differences
        }
        return sumd; // Return the total sum of differences
    }
}