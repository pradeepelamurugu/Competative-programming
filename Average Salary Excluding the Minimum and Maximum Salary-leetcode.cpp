//link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int count=0;
          double sum=0;
        int i;
        for(i=1;i<salary.size()-1;i++){
        count++;
          sum += salary[i]; 
            
            
        }
        
        return sum/count;        
    }
};

// double avg=(salary[1]+salary[salary.size()-2])/2;
