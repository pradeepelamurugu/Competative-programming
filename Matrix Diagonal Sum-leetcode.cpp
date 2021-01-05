//link: https://leetcode.com/problems/matrix-diagonal-sum/


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
            vector<int> row=mat[i];
            for(int j=0;j<row.size();j++){
                if(i==j){
                    ans+=row[j];
                }
            }
        }
        for(int i=0;i<mat.size();i++){
            vector<int> row=mat[i];
            for(int j=0;j<row.size();j++){
                if(i+j==mat.size()-1 && i!=j) ans+=row[j];
        }
   
        }
        return ans;
    }
};
