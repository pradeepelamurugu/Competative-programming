// link : https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int max=-1;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums1[i]<nums2[k]){
                            max=nums2[k];
                            break;
                        }
                        
                        
                    }
                ans.push_back(max);
                    max=-1;
                }
                
            }
            
        }
        return ans;
    }
};
