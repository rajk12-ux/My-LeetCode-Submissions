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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tail=head;
        ListNode* front=head;
        for(int i=0;i<n;i++){
            tail=tail->next;
        }
        if(tail==NULL){
            return head->next;
        }
        while(tail->next){
            front=front->next;
            tail=tail->next;
        }
        front->next=front->next->next;
        return head;
        }
};