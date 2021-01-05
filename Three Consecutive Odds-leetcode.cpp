//link:  https://leetcode.com/problems/three-consecutive-odds/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        stack<int> odd;
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                odd.push(arr[i]);
                j++;
                if(j==3) return true;
            }
            else if(arr[i]%2==0){
                while(!odd.empty()){
                    odd.pop();
                    j--;
                }
            }
            
        }
        return false;
    }
};
