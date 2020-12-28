//link: https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       
        unordered_set<string> ans;
        string code="";
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string curr=words[i];
            for(int j=0;j<words[i].length();j++){
                
                int pos=int(curr[j])-97;
                code+=morse[pos];
                
            }
            ans.insert(code);
            code="";
        }
        
        
       return ans.size(); 
    }
};
