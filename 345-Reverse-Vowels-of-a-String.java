class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vowel_indexes;
        int l=s.size();
        for(int i=0;i<l;i++){
            switch(s[i]){
                case 'a': case 'A':
                case 'e': case 'E':
                case 'i': case 'I':
                case 'o': case 'O':
                case 'u': case 'U':
                    vowel_indexes.push_back(i);
                    break;
            }
        }
        int vl=vowel_indexes.size();
        for(int i=0;i<vl/2;i++){
            swap(s[vowel_indexes[i]],s[vowel_indexes[vl-1-i]]);
        }
        return s;
    }
};