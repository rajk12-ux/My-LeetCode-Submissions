class Solution {
public:
    int minMaxDifference(int num) {
        string snum = to_string(num);
        string snum_max = snum;
        string snum_min = snum;
        
        // Find max by replacing characters
        int i = 0;
        if (snum[0] == '9') {
            int j = 0;
            while (j < snum.size() && snum[j] == '9') ++j;
            if (j < snum.size()) {
                char to_replace = snum[j];
                for (char &ch : snum_max) {
                    if (ch == to_replace) ch = '9';
                }
            }
        } else {
            char to_replace = snum[0];
            for (char &ch : snum_max) {
                if (ch == to_replace) ch = '9';
            }
        }
        
        // Find min by replacing all occurrences of the first digit
        char to_replace_min = snum[0];
        for (char &ch : snum_min) {
            if (ch == to_replace_min) ch = '0';
        }
        return stoi(snum_max) - stoi(snum_min);
    }
};
