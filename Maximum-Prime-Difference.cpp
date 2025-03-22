class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        unordered_set<int> primes={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        int l=0,r=nums.size()-1;
        while(l<nums.size()){
            if(primes.find(nums[l])!=primes.end())break;
            ++l;
        }
        while(r>0){
            if(primes.find(nums[r])!=primes.end())break;
            --r;
        }
        return r-l;
    }
};