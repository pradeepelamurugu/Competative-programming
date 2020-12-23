//link: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for(int i=target.size()-1;i>=0;i--){
            for(int j=0;j<arr.size();j++){
                if(target[i]==arr[j]){
                    target.pop_back();
                    arr.erase(arr.begin() + j);
                    break;
                }
            }
        
        
        }
        return target.empty();
    }
};
