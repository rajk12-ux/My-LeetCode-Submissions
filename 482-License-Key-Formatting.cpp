class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        vector<char> letters;
        for(char c:s){
            if(c!='-'){
                letters.push_back(toupper(c));
            }
        }
        if(letters.size()==0)return "";
        reverse(letters.begin(),letters.end());
        string ans="";
        for(int i=0;i<letters.size();i+=k){
            for(int j=i;j<min(i+k,(int)letters.size());j++){
                ans.push_back(letters[j]);
            }
            ans.push_back('-');
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};