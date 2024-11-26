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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *da=new ListNode();
        ListNode *dd=da;
        int d=0;
        int c=0;
        while(l1 && l2){
            d=l1->val+l2->val+c;
            c=d/10;
            d=d%10;
            //da->val=d;
            da->next=new ListNode(d);
            da=da->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1){
            while(l1){
                d=l1->val+c;
                c=d/10;
                d=d%10;
                //da->val=d;
                da->next=new ListNode(d);
                da=da->next;
                l1=l1->next;
            }
        }
        else if(l2){
            while(l2){
                d=l2->val+c;
                c=d/10;
                d=d%10;
                //da->val=d;
                da->next=new ListNode(d);
                da=da->next;
                l2=l2->next;
            }
        }
        if(c!=0){
            //da->val=c;
            da->next=new ListNode(c);
            da=da->next;
        }
        //da=NULL;
        return dd->next;
    }
};