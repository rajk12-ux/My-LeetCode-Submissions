class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        unordered_set<int> primes={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        pair<int,int> ends=make_pair(-1,-1);
        int i=0;
        for(;i<nums.size();i++){
            if(primes.find(nums[i])!=primes.end()){
                ends.first=i;
                break;
            }
        }
        ++i;
        for(;i<nums.size();i++){
            if(primes.find(nums[i])!=primes.end()){
                ends.second=i;
            }
        }
        if(ends.second==-1)return 0;
        return ends.second-ends.first;
    }
};