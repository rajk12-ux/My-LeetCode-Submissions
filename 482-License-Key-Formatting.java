class Solution {
    public String licenseKeyFormatting(String s, int k) {
        List<Character> letters = new ArrayList<>();

        for(char c : s.toCharArray()) {
            if(c != '-') {
                letters.add(Character.toUpperCase(c));
            }
        }

        if(letters.size() == 0) return "";

        Collections.reverse(letters);

        StringBuilder ans = new StringBuilder();

        for(int i = 0; i < letters.size(); i += k) {
            for(int j = i; j < Math.min(i + k, letters.size()); j++) {
                ans.append(letters.get(j));
            }
            ans.append('-');
        }

        ans.deleteCharAt(ans.length() - 1);
        ans.reverse();

        return ans.toString();
    }
}