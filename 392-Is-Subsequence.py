class Solution {
    public boolean isSubsequence(String s, String t) {
        if(s.length()>t.length())return false;
        int n=0;
        for(int i=0;i<s.length();i++){
            if(n==t.length())return false;
            while(t.charAt(n)!=s.charAt(i)){
                ++n;
                if(n==t.length())return false;
            }
            ++n;
        }
        return true;
    }
}