//link : https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> split;
        int count=0,ans=0;
        for(char ch:allowed){
            split.insert(ch);
        }
        for(int i=0;i<words.size();i++){
            for(auto c:words[i]){
                if(split.find(c)!=split.end()){
                    count++;
                    if(count==words[i].size()){
                        ans++;
                    }
                }
            }
            count=0;
        }
        return ans;
    }
};
