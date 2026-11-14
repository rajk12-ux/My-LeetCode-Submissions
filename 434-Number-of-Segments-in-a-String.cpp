import java.util.StringTokenizer;
class Solution {
    public int countSegments(String s) {
        StringTokenizer tokenizer = new StringTokenizer(s);
        return tokenizer.countTokens();
    }
}