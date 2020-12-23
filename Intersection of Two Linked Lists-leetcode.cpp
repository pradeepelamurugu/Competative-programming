//link: https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0,count2=0;
        for(ListNode* temp1=headA;temp1!=NULL;temp1=temp1->next){
            count1++;
        }
        for(ListNode* temp1=headB;temp1!=NULL;temp1=temp1->next){
            count2++;
        }
        
        if(count1>count2){
            for(int i=0;i<count1-count2;i++){
                headA=headA->next;
            }
        }
        else if(count2>count1){
            for(int i=0;i<count2-count1;i++){
                headB=headB->next;
            }
        }
        
        while(headA&&headB){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;    
        }
};
