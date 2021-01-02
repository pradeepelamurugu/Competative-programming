//link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        for(auto i:nums){
            if(i==0) count++;
            else{
                ans.push_back(i);
            }
        }
        for(int j=0;j<count;j++){
            ans.push_back(0);
        }
        swap(ans,nums);
        
    }
};
