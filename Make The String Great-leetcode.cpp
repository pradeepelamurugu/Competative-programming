//link: https://leetcode.com/problems/make-the-string-great/



class Solution {
public:
    string makeGood(string s) {
        if(s.length()<2) return s;
        stack<char> anss;
        string ans="";
        for(int i=0;i<s.length();i++){
            
            if(s[i]>'a' && s[i]<'z'){
               if(anss.empty()){
                anss.push(s[i]);
                   continue;
                }
                
                if(anss.top()-s[i]==-32 || anss.top()-s[i]==32){
                    anss.pop();
                    continue;
                }
                anss.push(s[i]);
            }
            else{
                 if(anss.empty()){
                anss.push(s[i]);
                   continue;
                }
                if(anss.top()-s[i]==-32 || anss.top()-s[i]==32){
                    anss.pop();
                }
                else{
                    anss.push(s[i]);
                }
                
            }
        }
        
        while(!anss.empty()){
            ans+=anss.top();
            anss.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
