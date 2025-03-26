class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> p;
        for(int i=0;i<s.size();i++){
            p[s[i]]=i;
        }
        int sumd=0;
        for(int i=0;i<t.size();i++){
            sumd += abs(p[t[i]]-i);
        }
        return sumd;
    }
};