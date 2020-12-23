//link : https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x,y,ans;
        int middle_index = nums.size()-n-1;
        for(int i=0;i<=middle_index;i++){
            x.push_back(nums[i]);
        }
         for(int i=middle_index+1;i<nums.size();i++){
            y.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            do{
                ans.push_back(x[i]);                
            }while(false);
            do{
                ans.push_back(y[i]);                
            }while(false);
            
            
        }
        
       return ans; 
    }
};
