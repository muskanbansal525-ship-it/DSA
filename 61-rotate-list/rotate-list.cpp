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

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next== nullptr){
            return head;
        }
        ListNode*curr = head;
         ListNode* curr1 = head;
        int count =1;
        while(curr->next!=NULL){
             curr = curr->next;
             count++;
        }
        curr->next = head;
   k = k%count;
         if ( k==0){
        curr->next = nullptr;
        return  head;
    }
        int diff = count - k - 1;
        while (diff--) {
            curr1=curr1->next;
        }
       ListNode* newHead = curr1->next;
        curr1->next = nullptr;

        return newHead;
    }
};