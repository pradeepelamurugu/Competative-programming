// link: https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0#

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test,num;
    
	cin >> test;
	while(test>0){
	    int temp;
	    test--;
	    int quan,ans;
	    cin >> quan;
	    cin >> ans;
	    vector<int> nums;
	    
	    for(int b=0;b<quan;b++){
	        
	        
	        cin >> num;
	        nums.push_back(num);
	        }
	       bool answer=false;
	        for(int i=0;i<quan-2;i++){
	             unordered_set<int> findset;
	            for(int j=i+1;j<quan;j++){
	                int c;
	                c=ans-(nums[i]+nums[j]);
	                if(findset.find(c)!=findset.end()){
	                    answer=true;
	                    break;
	                }
	                else{
	                    findset.insert(nums[j]);
	                }
	                
	            }
	            if(answer) break;
	        }
	    if(answer){
	        cout << 1 << endl;
	    }
	    else{
	        cout << 0 << endl;
	}
	}	
	return 0;
}
