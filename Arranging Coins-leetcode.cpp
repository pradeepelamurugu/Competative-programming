//link: https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n) {
        int count,i,available;
        i=1;
        count=0;
        available=n;
        while(i<=available){
            available-=i;
            count++;
            i++;
        }
    return count;
    }
};
