class Solution {
public:
    bool canChange(string start, string target) {
        vector<pair<bool,int>> pos_s;
        vector<pair<bool,int>> pos_tr;
        for(int i=0;i<start.size();i++){
            if(start[i]=='L')pos_s.push_back(make_pair(false,i));
            else if(start[i]=='R')pos_s.push_back(make_pair(true,i));
        }
        for(int i=0;i<target.size();i++){
            if(target[i]=='L')pos_tr.push_back(make_pair(false,i));
            else if(target[i]=='R')pos_tr.push_back(make_pair(true,i));
        }
        if(pos_s.size()!=pos_tr.size())return false;
        for(int i=0;i<pos_s.size();i++){
            if(pos_s[i].first != pos_tr[i].first )return false;
            else if( pos_s[i].second > pos_tr[i].second  && pos_s[i].first==true)return false;
            else if( pos_s[i].second < pos_tr[i].second  && pos_s[i].first==false) return false;
        }
        return true;
    }
};