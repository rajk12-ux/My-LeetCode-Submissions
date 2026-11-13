class Solution {
    public int longestPalindrome(String s) {
        int freq[]=new int[58];
        for(char c:s.toCharArray()){
            ++freq[c-'A'];
        }
        boolean odd_freq=false;
        int ans=0;
        for(int f:freq){
            if(f%2==1)odd_freq=true;
            ans += f/2;
        }
        ans *=2;
        if(odd_freq){
            ans+=1;
        }
        return ans;
    }
}