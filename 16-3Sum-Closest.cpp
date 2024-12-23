class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int f=nums[0]+nums[1]+nums[2]-target;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;
            int sumn;
            int smin=INT_MAX;
            while(l<r){
                sumn=nums[i]+nums[l]+nums[r]-target;
                if(abs(smin)>abs(sumn))smin=sumn;
                if(sumn>0)--r;
                else if(sumn<0)++l;
                else return target;
            }
            if(abs(smin)<abs(f)){
                f=smin;
            }
            //cout<<smin<<'\n';
        }
        return f+target;
    }
};