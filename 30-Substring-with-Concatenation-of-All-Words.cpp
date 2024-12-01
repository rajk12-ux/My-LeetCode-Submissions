#include <algorithm>
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=words[0].size();//size of each word
        if(s.size()<words.size()*n)return {};
        unordered_map<string,int>my_bag;
        for_each(words.begin(), words.end(), [&my_bag](string elem) { my_bag[elem]++; });
        vector<int> ans;
        for(int i=0;i<n;i++){
            vector<string> all;
            for(int j=i;j<s.size();j+=n){
                all.push_back(s.substr(j,n));
            }
            if(all[all.size()-1].size()!=n)all.pop_back();//if last word is shorter than n pop
            if(all.size() < words.size())break;
            unordered_map<string,int>curr_bag;
            for_each(all.begin(), all.begin()+words.size(), [&curr_bag](string elem) { curr_bag[elem]++;});
            for(pair<string,int> entry:my_bag){
                curr_bag[entry.first]-=my_bag[entry.first];
                if(curr_bag[entry.first]==0)curr_bag.erase(entry.first);
            }
            for(int l=0;l<all.size()-words.size();l++){
                if(curr_bag.size()==0)ans.push_back(i+l*n);
                --curr_bag[all[l]];//removing the leftmost element from  and deque
                if(curr_bag[all[l]]==0)curr_bag.erase(all[l]);//if some key's vaalue reaches zero pop it out
                ++curr_bag[all[l+words.size()]];//pushing next-right element
                if(curr_bag[all[l+words.size()]]==0)curr_bag.erase(all[l+words.size()]);//
            }
            if(curr_bag.size()==0)ans.push_back(i+(all.size()-words.size())*n);
        }
        return ans;
    }
};