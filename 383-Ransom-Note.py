class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq_r(26,0);
        vector<int> freq_m(26,0);
        for(char c:ransomNote){
            ++freq_r[c-'a'];
        }
        for(char c:magazine){
            ++freq_m[c-'a'];
        }
        for(int i=0;i<26;i++){
            if(freq_r[i]>freq_m[i])return false;
        }
        return true;
    }
};