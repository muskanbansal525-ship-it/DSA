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
ListNode*reverse(ListNode*head,int k){
  if(head ==nullptr){
            return  NULL;
        }
        if(head->next ==NULL){
            return  head;
        }
        ListNode*curr= head;
        ListNode*forward =  NULL;
        ListNode*prev =  NULL;
        int count =0;
        while ( curr!=NULL && count<k){
             forward = curr->next;
              curr ->next = prev;
                prev = curr;
              curr = forward;
              count++;
        }
      
         if( forward!=NULL){
            head->next = reverse(forward,k); 
         }
         return  prev;
}
    ListNode* swapPairs(ListNode* head) {
 return reverse(head, 2);
    }

};