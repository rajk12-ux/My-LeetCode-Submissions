class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size())return s;
        vector<string> wall(numRows,"");
        int x=1;
        bool down=true;
        wall[0].push_back(s[0]);
        for(int i=1;i<s.size();i++){
            wall[x].push_back(s[i]);
            if(x==0 || x==numRows-1)down=!down;
            if(down)++x;
            else --x;
        }
        string ans="";
        for(string row:wall){
            ans+=row;
        }
        return ans;
    }
};