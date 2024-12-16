class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minl=strs[0].size();
        for( int i=1;i<strs.size();i++){
            if(minl>strs[i].size())minl=strs[i].size();
        }
        string ans="";
        for(int i=0;i<minl;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[j-1][i])return ans;
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};