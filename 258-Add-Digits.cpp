class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int nex=0;
            while(num){
                nex += num%10;
                num /= 10;
            }
            num=nex;
        }
        return num;
    }
};