class Solution {
public:
    int longestPalindrome(string s) {
        int freq[58];
        for(char c:s){
            ++freq[c-'A'];
        }
        bool odd_freq=false;
        int ans=0;
        for(int f:freq){
            if(f%2==1)odd_freq=1;
            ans += f/2;
        }
        ans *=2;
        if(odd_freq){
            ans+=1;
        }
        return ans;
    }
};