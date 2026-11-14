class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int words=0;
        while(ss>>word){
            ++words;
        }
        return words;
    }
};