class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> parts;
        for(int i=0;i<s.size();i+=k){
            parts.push_back(s.substr(i,k));
        }
        while(parts[parts.size()-1].size()<k){
            parts[parts.size()-1].push_back(fill);
        }
        return parts;
    }
};