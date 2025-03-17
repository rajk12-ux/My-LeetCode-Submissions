class Solution {
    public char findTheDifference(String s, String t) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Count characters in string `s`
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        // Adjust counts using characters from string `t`
        for (char c : t.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) - 1);
            if (map.get(c) == 0) {
                map.remove(c);
            }
        }

        // The remaining character is the answer
        return map.keySet().iterator().next();
    }
}