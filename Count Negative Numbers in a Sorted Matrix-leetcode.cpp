//link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            vector<int> size=grid[i];
            for(int j=0;j<size.size();j++){
                if(size[j]<0) count++;
                
            }
        }
        return count;
    }
};
