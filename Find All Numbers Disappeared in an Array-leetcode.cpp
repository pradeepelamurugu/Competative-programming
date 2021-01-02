//link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        // sort(nums.begin(),nums.end());
        unordered_set<int> set;
        for(auto j:nums){
            set.insert(j);
        }
        
        
        for(int i=0;i<nums.size();i++){
            if(set.find(i+1)==set.end()){
               
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
