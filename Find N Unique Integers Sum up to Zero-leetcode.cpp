//link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n==0 || n==1){
            ans.push_back(0);
            return ans;
        }
        else{
          
            for(int i=-1*(n/2);i<=n/2;i++){
                if(n%2==0 && i==0) continue;
                ans.push_back(i);
            }
        
        }
        return ans;
    }
            
            
            
};
