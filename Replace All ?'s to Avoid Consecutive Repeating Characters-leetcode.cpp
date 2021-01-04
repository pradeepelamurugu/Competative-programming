//link: https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/

class Solution {
public:
    string modifyString(string s) {
        string ans="";
        
        int letter=98;
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
                if(letter>122) letter=97;
               if(s[i+1]==char(letter)) letter+=2;
                if(i>0 && s[i-1]==char(letter)) letter+=2;
                 if(s[i+1]==char(letter)) letter+=2;
                // if(s[i-1]==char(letter)) letter+=2;
                ans+=char(letter);
                letter++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
