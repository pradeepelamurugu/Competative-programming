//link : https://leetcode.com/problems/middle-of-the-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode *ans=head;
        while(head->next!=NULL){
            count++;
            head=head->next;
        }
        // count++;
        
        if(count%2==0)
            count=(count/2);
        else
            count=(count/2)+1;
        
        while(count>0){
            ans=ans->next;
            count-=1;
            
        }
       return ans;
    }
};




//  if(count%2==0)
//             count=count/2+1;
//         else
//             count=count/2+2;
//         while(ans->val!=count && ans->next->val!=count){
//             ans=ans->next;
//         }
//         return ans;
