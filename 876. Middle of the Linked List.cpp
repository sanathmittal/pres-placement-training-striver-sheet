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
 int length(ListNode* head){
     int l=0;
     while(head!=NULL){
         l++;
         head=head->next;
     }
     return l;
 }

 ListNode* middle(ListNode* head){
     if(head==NULL || head->next==NULL)
        return head;
    
        ListNode* fast= head->next;
        ListNode* slow= head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;

        slow=slow->next;    
    }
    return slow;
 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // int l=length(head);
        // int ans=(l/2);
        // ListNode* temp = head;

        // while(ans--){
        //     temp=temp->next;
        // }

        // return temp;
        return middle(head);
    }
};
