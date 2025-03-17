class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums){
            ++freq[i];
        }
        for(pair<int,int> p:freq){
            if(p.second & 1 == 1)return false;
        }
        return true;
    }
};