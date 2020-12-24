//link:https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1,ans2;
        for(int i=0;i<word1.size();i++){
            ans1+=word1[i];
        }
        for(int j=0;j<word2.size();j++){
            ans2+=word2[j];
        }
        return ans1==ans2;
    }
};
