// link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left,right,mid;
        left=0;
        char letter;
        right=letters.size()-1;
        if(target>=letters[right]) return letters[left];
        while(left<=right){
            mid=left+ (right-left)/2;
            if(letters[mid]<=target){
                left=mid+1;}  
            else if(letters[mid]>target){
                 letter=letters[mid];
              right=mid-1;}
            
        }
        return letter;
         
        
    }
};
