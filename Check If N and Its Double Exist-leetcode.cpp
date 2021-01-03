//link: https://leetcode.com/problems/check-if-n-and-its-double-exist/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> doub;
        int count=0;
        for(auto a:arr){
            if(a==0){ count++; continue;}
            doub.insert(a*2);
        }
        if(count!=0 && count%2==0) return true;
        
        for(auto b:arr){
            if(doub.find(b)!=doub.end()){
                return true;
            }
        }
        if(count==1) return false;
         if(doub.empty()) return true;
        return false;
    }
};
