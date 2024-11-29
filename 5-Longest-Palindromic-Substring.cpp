class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0 || n==1)return s;
        string modd="$#";
        for(int i=0;i<n;i++){
            modd+=s[i];
            modd+="#";
        }
        modd+="@";
        int m=modd.size();
        vector<int> p(m, 0);
        int c=0,r=0;
        for(int i=2;i<m-2;i++){
            int mirr=2*c-i;//extent of mirror c(centre)-(-(c-i))distance from centre
            if(i<r)p[i]=max(p[i],min(r-i,p[mirr]));//if falls under mirror we copy the values
            while(modd[i+1+p[i]]==modd[i-1-p[i]])++p[i];//starting from values we extend both ways and check equality
            if(i+p[i]>r){//if this mirror has greater rightward extent then update c and r
                c=i;
                r=i+p[i];
            }
        }
        int maxl=1;
        int maxi=2;
        for(int i=2;i<m-2;i++){
            if(p[i]>maxl){
                maxl=p[i];
                maxi=i;
            }
        }
        if(maxl%2==1)return s.substr(maxi/2-maxl/2-1,maxl);
        return s.substr((maxi-maxl)/2,maxl);
    }
};