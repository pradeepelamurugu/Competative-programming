//link : https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> st;
        int count=0;
    for(int i=0;i<s.length();i++){
        if(st.empty()) st.push(s[i]);
        else{
            if(s[i]==st.top()){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            
            
        }
        if(st.empty()) count++;
        
    }        
    return count;
    }
};


