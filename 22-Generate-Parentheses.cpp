class Solution {
public:
    void generate(int i,int lb,int rb,int &n,string now,vector<string> &ans){
        if(i==2*n || lb==n){
            while(now.size()<2*n){
                now.push_back(')');
            }
            ans.push_back(now);
            return;
        }
        now.push_back('(');
        generate(i+1,lb+1,rb,n,now,ans);
        if(lb==rb)return;
        now[now.size()-1]=')';
        generate(i+1,lb,rb+1,n,now,ans);
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(0,0,0,n,"",ans);
        return ans;
    }
};