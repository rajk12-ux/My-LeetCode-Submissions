class Solution {
public:
    string oddString(vector<string>& words) {
        for(int i=1;i<words[0].size();i++){
            unordered_map<int,vector<int>> dstack;
            for(int j=0;j<words.size();j++){
                dstack[words[j][i]-words[j][i-1]].push_back(j);
                for(pair<int,vector<int>> p:dstack){
                    cout<<p.first<<"   ";
                    for(int i:p.second){
                        cout<<i<<' ';
                    }
                    cout<<'\n';
                }
                cout<<'\n';
                if(j>=2 && dstack.size()>1){
                    unordered_map<int,vector<int>>::iterator f=dstack.begin();
                    if((f->second).size()==1)return words[(f->second)[0]];
                    else return words[(next(f)->second)[0]];
                }
            }
        }
        return "";
    }
};