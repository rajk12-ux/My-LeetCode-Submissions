class Solution {
public:
    int maximumCount(vector<int>& nums) {
        if(nums[0]==0){
            if(nums[nums.size()-1]==0)return 0;
            else {
                int l=0,r=nums.size()-1;
                int mid;
                while(l<=r){
                    mid=(l+r)>>1;
                    if(nums[mid]==0 && nums[mid+1]>0)break;
                    nums[mid]>0?r=mid-1:l=mid+1;
                }
                return (int)nums.size()-mid-1;
            }
        }
        if(nums[nums.size()-1]==0){
            int l=0,r=nums.size()-1;
            int mid;
            while(l<=r){
                mid=(l+r)>>1;
                if(nums[mid]==0 && nums[mid-1]<0)break;
                nums[mid]<0?l=mid+1:r=mid-1;
            }
            return l;
        }
        if((nums[0]>0) == (nums[nums.size()-1]>0))return nums.size();
        int l=0,r=nums.size()-1;
        int mid;
        while(l<=r){
            mid=(l+r)>>1;
            if(nums[mid]==0)break;
            nums[mid]>0?r=mid-1:l=mid+1;
        }
        if(nums[mid]==0){
            if(l==mid){
                return max(mid,(int)nums.size()-r-1);
            }
            int rl=mid,rr=r-1,lr=mid-1,ll=l;
            int rmid,lmid;
            while(rl<=rr){
                rmid=(rl+rr)>>1;
                if(nums[rmid]==0 && nums[rmid+1]>0){
                    break;
                }
                (nums[rmid]>0 && nums[rmid+1]>0)?rr=rmid-1:rl=rmid+1;
            }
            while(ll<=lr){
                lmid=(ll+lr)>>1;
                if(nums[lmid]<0 && nums[lmid+1]==0){
                    break;
                }
                (nums[lmid+1]<0 && nums[lmid]<0)?ll=lmid+1:lr=lmid-1;
            }
            return max(lmid+1,(int)nums.size()-rmid-1);
        }
        return max(l,(int)nums.size()-l);
    }
};