class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> sv;
        stringstream ss(s);
        string w;
        while(ss>>w){
            sv.push_back(w);
        }
        if(pattern.size()!=sv.size())return false;
        unordered_map<char,string> maps;
        for(int i=0;i<pattern.size();i++){
            if(maps.find(pattern[i])==maps.end())maps[pattern[i]]=sv[i];
            else if(maps[pattern[i]]!=sv[i])return false;
        }
        unordered_map<string,char> nmaps;
        for(int i=0;i<sv.size();i++){
            if(nmaps.find(sv[i])==nmaps.end())nmaps[sv[i]]=pattern[i];
            else if(nmaps[sv[i]]!=pattern[i])return false;
        }
        return true;
    }
};