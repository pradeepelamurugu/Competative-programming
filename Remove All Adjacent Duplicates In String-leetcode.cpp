// link:https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> dupli;
        string ans;
        for(char ch : S){
            
            if(dupli.size()==0){
                dupli.push(ch);
            }
            else{
                 if(dupli.top()==ch){
                    dupli.pop();
                }
                
                else if(dupli.top()!=ch){
                    dupli.push(ch);
                }
               
            }
        }
            
            for(int i=dupli.size();i>0;i--){
                char c=dupli.top();
                ans+=c;
                dupli.pop();
            }
        
         reverse(ans.begin(), ans.end());
    return ans;    
    }
};
