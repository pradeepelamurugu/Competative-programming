// link: https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,left,right;
        left=0;
        right=nums.size()-1;
        while(left<=right){
            mid=left + (right-left)/2;
            
            if (target==nums[mid]) return mid;
            
            else if(target<nums[mid]){
                right=mid-1;
            }
            else left=mid+1;
        }
    if(nums[mid]<target) return mid+1;
    else return mid;
    }
    
};
