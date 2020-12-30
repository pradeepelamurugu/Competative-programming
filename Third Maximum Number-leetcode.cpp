//link: https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> temp;
        
        
       
            sort(nums.begin(), nums.end());
            set<int> setnum;
            for(auto n:nums){
                setnum.insert(n);
            }
            for(auto nu:setnum){
                temp.push_back(nu);
            }
            
        
        if(temp.size()<3) return *max_element(nums.begin(), nums.end());
        return temp[temp.size()-3];
    }
};
