class Solution {
public:
    char repeatedCharacter(string s) {
        bool occur[26]={false};
        for(char c:s){
            if(occur[c-'a'])return c;
            occur[c-'a']=true;
        }
        return '0';
    }
};