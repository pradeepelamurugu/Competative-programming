//link: https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string str) {
        string ans;
        for(char ch:str){
            if(ch>='A' && ch<='Z'){
                ans.push_back(ch+' ');
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
