class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")return "0";
        vector<int> ans(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                ans[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                if(ans[i+j+1] >= 10){
                    ans[i+j] += ans[i+j+1]/10;
                    ans[i+j+1] %= 10;
                }
            }
        }
        for(int i:ans){
            cout<<i<<' ';
        }
        int s;//start of zero
        if(ans[0]==0)s=1;
        else s=0;
        return accumulate(ans.begin()+s, ans.end(), string(),[](const string &a, int b) { return a + to_string(b); });
    }
};