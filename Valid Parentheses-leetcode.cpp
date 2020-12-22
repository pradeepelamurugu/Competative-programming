// link: https://leetcode.com/problems/valid-parentheses/


class Solution {
public:
    bool isValid(string s) {
        stack<char> braces;
        for(auto ch : s){
            if((ch==')' || ch==']' || ch=='}') && braces.size()==0)
                return false;
            if(ch=='(' || ch=='[' || ch=='{'){
                braces.push(ch);
            }
            else{
                if(ch==')' && braces.top()=='('){
                    braces.pop();
                }
                else if(ch==']' && braces.top()=='['){
                    braces.pop();
                }
                else if(ch=='}' && braces.top()=='{'){
                    braces.pop();
                }
                else{
                    return false;
                }
                
            }
        }
        return braces.size()==0;
    }
};
