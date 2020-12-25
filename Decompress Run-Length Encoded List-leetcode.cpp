//link: https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int freq,val;
        for(int i=0;i<nums.size()/2;i++){
           
                freq=nums[2*i];
                val=nums[2*i+1];
              
            
            for(int k=0;k<freq;k++){
                ans.push_back(val);
            }
            freq=0;
            val=0;
        }
        return ans;
    }
};
