class Solution {
    public int maximumCount(int[] nums) {
        if(nums[0]==0){
            if(nums[nums.length-1]==0)return 0;
            else {
                int l=0,r=nums.length-1;
                int mid=(l+r)>>1;
                while(l<=r){
                    mid=(l+r)>>1;
                    if(nums[mid]==0 && nums[mid+1]>0)break;
                    if(nums[mid]>0){
                        r=mid-1;
                    }
                    else l=mid+1;
                }
                return nums.length-mid-1;
            }
        }
        if(nums[nums.length-1]==0){
            int l=0,r=nums.length-1;
            int mid=(l+r)>>1;
            while(l<=r){
                mid=(l+r)>>1;
                if(nums[mid]==0 && nums[mid-1]<0)break;
                if (nums[mid]<0){
                    l=mid+1;
                }
                else r=mid-1;
            }
            return l;
        }
        if((nums[0]>0) == (nums[nums.length-1]>0))return nums.length;
        int l=0,r=nums.length-1;
        int mid=(l+r)>>1;
        while(l<=r){
            mid=(l+r)>>1;
            if(nums[mid]==0)break;
            if(nums[mid]>0){
                r=mid-1;
            }
            else l=mid+1;
        }
        if(nums[mid]==0){
            if(l==mid){
                return Math.max(mid,nums.length-r-1);
            }
            int rl=mid,rr=r-1,lr=mid-1,ll=l;
            int rmid=(rl+rr)>>1,lmid=(ll+lr)>>1;
            while(rl<=rr){
                rmid=(rl+rr)>>1;
                if(nums[rmid]==0 && nums[rmid+1]>0){
                    break;
                }
                if(nums[rmid]>0 && nums[rmid+1]>0){
                    rr=rmid-1;
                }
                else rl=rmid+1;
            }
            while(ll<=lr){
                lmid=(ll+lr)>>1;
                if(nums[lmid]<0 && nums[lmid+1]==0){
                    break;
                }
                if(nums[lmid+1]<0 && nums[lmid]<0){
                    ll=lmid+1;
                }
                else lr=lmid-1;
            }
            return Math.max(lmid+1,nums.length-rmid-1);
        }
        return Math.max(l,nums.length-l);
    }
}