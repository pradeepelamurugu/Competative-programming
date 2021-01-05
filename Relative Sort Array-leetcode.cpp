//link:  https://leetcode.com/problems/relative-sort-array/


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> temp;
        unordered_set<int> set2;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    ans.push_back(arr1[j]);
                }
            }
        }
        for(auto a:arr2){
            set2.insert(a);
        }
        for(auto b:arr1){
            if(set2.find(b)==set2.end()){
                temp.push_back(b);
            }
        }
        sort(temp.begin(),temp.end());
        for(auto c:temp){
            ans.push_back(c);
        }
        return ans;
    }
};
