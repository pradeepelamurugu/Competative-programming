//link: https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode* > exist;
        while(head!=NULL && head->next!=NULL){
            if(exist.find(head->next)!=exist.end()){
               // exist.insert(head); 
               //  head=head->next;
                return true;
            }
            else{
             exist.insert(head->next);
                  head=head->next;
            }
        }
    return false;
    }
};
