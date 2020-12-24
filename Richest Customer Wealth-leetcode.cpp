// link: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0,sum=0;
        for(int i=0;i<accounts.size();i++){
            vector<int> temp;
            temp=accounts[i];
            for(int j=0;j<temp.size();j++){
                sum+=temp[j];
            }
            if(max<sum){
                max=sum;
                
            }
        sum=0;
        }
        return max;
    }
};
