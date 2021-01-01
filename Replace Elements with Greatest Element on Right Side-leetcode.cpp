//link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int max;
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                ans.push_back(-1);
                return ans;
            }
            max=0;
            for(int j=i+1;j<arr.size();j++){
                
            
            
            if(max<arr[j]){
                max=arr[j];
            }
            
        }
            
     ans.push_back(max);
            
            
    }
        return ans;
    }
};
