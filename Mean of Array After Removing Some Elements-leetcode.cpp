//link:  https://leetcode.com/problems/mean-of-array-after-removing-some-elements/

class Solution {
public:
    double trimMean(vector<int>& arr) {
       int remove=0;
        double sum=0;
        int count=0;
        sort(arr.begin(),arr.end());
        remove=arr.size()*0.05;
        for(int i=remove;i<arr.size()-remove;i++){
            count++;
            sum+=arr[i];
        }
        return sum/count;
    }
};
