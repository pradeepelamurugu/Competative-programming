//link: https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()==0) return true;
       if(word.length()==1) return true;
        int upper=0;
        int lower=0;
     
        for(int i=0;i<word.length();i++){
         if(isupper(word[i])) upper++;
        }
        
        if(upper==word.length()) return true;
        upper=0;
        
        for(int i=0;i<word.length();i++){
         if(islower(word[i])) lower++;
        }
        
        
        if(lower==word.length()) return true;
        lower=0;
        
        if(isupper(word[0]) && islower(word[1])){
        
            for(int i=1;i<word.length();i++){
                
               if(islower(word[i])) lower++;
            }
        if(lower==word.length()-1) return true;
        }
        
        return false;
    }
           
};
