class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size())return false;
        int n=0;
        for(int i=0;i<s.size();i++){
            if(n==t.size())return false;
            while(t[n]!=s[i]){
                ++n;
                if(n==t.size())return false;
            }
            ++n;
        }
        return true;
    }
};