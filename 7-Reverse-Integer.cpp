class Solution {
public:
    int reverse(int x) {
        bool isneg=false;
        if(x<0){
            if(x==-2147483648)return 0;
            x=(-1)*x;
            isneg=true;
        }
        string s=to_string(x);
        string umax="2147483647";
        string umin="2147483648";
        ::reverse(s.begin(),s.end());
        if(isneg){
            if(s.size()==umin.size()){
                for(int i=0;i<s.size();i++){
                    if(s[i]-umin[i]>0)return 0;
                    else if(s[i]-umin[i]<0)break;
                }
            }
            int ans=stoi("-"+s);
            return ans;
        }
        else {
            if(s.size()==umax.size()){
                for(int i=0;i<s.size();i++){
                    if(s[i]-umax[i]>0)return 0;
                    else if(s[i]-umax[i]<0)break;
                }
            }
            int ans=stoi(s);
            return ans;
        }
        return 0;
    }
};