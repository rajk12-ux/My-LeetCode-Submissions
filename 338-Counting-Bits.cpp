class Solution {
public:
    vector<int> countBits(int n) {
        vector<bool> b={false};
        vector<int> ans={0};
        for(int i=0;i<n;i++){
            bool c=true;
            for(int i=0;i<b.size();i++){
                if(!c)break;
                else{
                    if(b[i]){
                        b[i]=false;
                    }
                    else{
                        b[i]=true;
                        c=false;
                    }
                }
            }
            if(c)b.push_back(true);
            int count=0;
            for(bool curr:b){
                if(curr)++count;
            }
            ans.push_back(count);
        }
        return ans;
    }
};