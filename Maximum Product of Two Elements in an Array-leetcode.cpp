//link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lastele=nums[nums.size()-1];
        int lastel=nums[nums.size()-2];
        int ans=(lastele-1)*(lastel-1);        
        return ans;
        
    }
};
