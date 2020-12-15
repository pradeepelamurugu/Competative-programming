// link: https://leetcode.com/problems/fair-candy-swap/

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA=0,sumB=0;
        for(auto a:A){
            sumA+=a;
        }
        for(auto b:B){
            sumB+=b;
        }
        int ind_sum=(sumA+sumB)/2;
        
        unordered_set<int> exchangable_candies;
        for(auto b:B){
            exchangable_candies.insert(b);
        }
        vector<int> equal_candies;
        for(auto a:A){
            int req_candies = ind_sum - sumA + a;
            if(exchangable_candies.find(req_candies)!=exchangable_candies.end()){
                equal_candies.push_back(a);
                equal_candies.push_back(req_candies);
                break;
            }
        }
        
        
        return equal_candies;
    }
};
