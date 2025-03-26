class Solution {
    public int findPermutationDifference(String s, String t) {
        Map<Character, Integer> p = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            p.put(s.charAt(i), i);
        }
        int sumd = 0;
        for (int i = 0; i < t.length(); i++) {
            sumd += Math.abs(p.get(t.charAt(i)) - i);
        }
        return sumd;
    }
}