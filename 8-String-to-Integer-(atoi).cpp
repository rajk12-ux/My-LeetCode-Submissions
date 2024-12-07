class Solution {
public:
    int myAtoi(string s) {
        int ans=1;
        int i=0;
        while(s[i] == ' '){
            ++i;
        }
        if(i==s.size())return 0;
        int sign=1;
        if (s[i] == '-') {
            sign = -1;
            ++i;
        } 
        else if (s[i] == '+') {
            ++i;
        }
        int start=i;
        string num="";
        while(true){
            if(i==s.size())break;
            if((s[i]-'0')<0 || (s[i]-'0')>9 )break;
            num+=s[i];
            ++i;
        }
        i=0;
        while(num[i]=='0')++i;
        num=num.substr(i,num.size()-i);
        if(num.size()>10){
            if(sign==1)return INT_MAX;
            else return INT_MIN;
        }
        long n = 0;
        for (char c : num) {
            n= n * 10 + (c - '0');
        }
        n=n*sign;
        if(n>INT_MAX)return INT_MAX;
        if(n<INT_MIN)return INT_MIN;
        return n;
    }
};