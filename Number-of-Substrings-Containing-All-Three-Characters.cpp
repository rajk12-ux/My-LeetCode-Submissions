class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0,af=0,bf=0,cf=0,total=0;
        while(r<s.size()){
            switch(s[r++]){
                case 'a':
                    ++af;
                    break;
                case 'b':
                    ++bf;
                    break;
                case 'c':
                    ++cf;
                    break;
                default:
                    break;
            }
            if(af!=0 && bf!=0 && cf!=0){
                while(l<r){
                    total += (s.size()-r+1);
                    switch(s[l++]){
                        case 'a':
                            --af;
                            break;
                        case 'b':
                            --bf;
                            break;
                        case 'c':
                            --cf;
                            break;
                        default:
                            break;
                    }
                    if(af==0 || bf==0 || cf==0)break;
                }
            }
        }
        return total;
    }
};