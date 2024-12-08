class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        for(string s:strs){
            string tmp=s;
            sort(tmp.begin(),tmp.end());
            groups[tmp].push_back(s);
        }
        vector<vector<string>> ans;
        for(pair<string,vector<string>> p:groups){
            ans.push_back(p.second);
        }
        return ans;
    }
};