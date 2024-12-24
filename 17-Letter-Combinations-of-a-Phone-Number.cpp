class Solution {
public:
    void allcmbns(int i,string &digits,string &s,vector<string> &alls){
        if(i==digits.size()){
            alls.push_back(s);
            return;
        }
        switch (digits[i]){
            case '2':
                s.push_back('a');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('b');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('c');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;
            case '3':
                s.push_back('d');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('e');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('f');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;
            case '4':
                s.push_back('g');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('h');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('i');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;
            case '5':
                s.push_back('j');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('k');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('l');allcmbns(i+1,digits,s,alls);s.pop_back();
                break; 
            case '6':
                s.push_back('m');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('n');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('o');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;
            case '7':
                s.push_back('p');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('q');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('r');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('s');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;
            case '8':
                s.push_back('t');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('u');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('v');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;
            case '9':
                s.push_back('w');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('x');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('y');allcmbns(i+1,digits,s,alls);s.pop_back();
                s.push_back('z');allcmbns(i+1,digits,s,alls);s.pop_back();
                break;  
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        vector<string> ans;
        string tmp="";
        allcmbns(0,digits,tmp,ans);
        return ans;
    }
};