class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int s1=max(values[0],values[1]+1);
        int ans=values[0]+values[1]-1;
        for(int i=2;i<values.size();i++){
            ans=max(ans,s1+values[i]-i);
            s1=max(s1,values[i]+i);
        }
        return ans;
    }
};