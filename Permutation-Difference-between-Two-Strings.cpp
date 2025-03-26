class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int p[26];
        for(int i=0;i<s.size();i++){
            p[s[i]-'a']=i;
        }
        int sumd=0;
        for(int i=0;i<t.size();i++){
            sumd += abs(p[t[i]-'a']-i);
        }
        return sumd;
    }
};