//link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int max=0;
        int ans;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(auto x: count){
            if(max<x.second){
                max=x.second;
                ans=x.first;
                
            }
        }
        return ans;
    }
};
