//link: https://leetcode.com/problems/height-checker/


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copy;
        int count=0;
        for(auto a:heights){
            copy.push_back(a);
        }
        sort(copy.begin(),copy.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=copy[i]){
                count++;
            }
        }
    return count;
    }
};
