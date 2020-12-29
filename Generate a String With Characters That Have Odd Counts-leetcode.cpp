//link: https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n==1) return "a";
        if(n==2) return "ab";
        else{
            if(n%2!=0){
                for(int i=0;i<n;i++){
                    ans+='a';
                }
            }
            else{
               for(int i=0;i<n-1;i++){
                    ans+='a';
                }
                ans+='b';

                
            }
            
            
            
            
        }
        return ans;
        
    }
};
