class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int summ=0,dsum=0;
        for(int i:nums){
            summ += i;
            while(i){
                dsum += i%10;
                i /= 10;
            }
        }
        return summ -dsum;
    }
};