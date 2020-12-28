//link: https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0,count2=0;
        string word1="",word2="";
        int half=(s.length()/2)-1;
        unordered_set<char> vowels({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        for(int i=0;i<=half;i++){
            word1+=s[i];
        }
        for(int j=half+1;j<s.length();j++){
            word2+=s[j];
        }
        for(int i=0;i<word1.length();i++){
            if(vowels.find(word1[i])!=vowels.end()) count1++;
        }
        for(int i=0;i<word2.length();i++){
            if(vowels.find(word2[i])!=vowels.end()) count2++;
        }
        return count1==count2;
    }
};
