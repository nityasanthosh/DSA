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
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr) return nullptr;
        ListNode* D1 = new ListNode(0);
        ListNode* D2 = new ListNode(0);
        ListNode* prev1 = D1;
        ListNode* prev2 = D2;
        ListNode* current = head;

        while(current != nullptr){
            if(current->val < x){
                prev1->next = current;
                prev1 = current;
            }else{
                prev2->next = current;
                prev2 = current;
            }current = current->next;
        }
        prev1->next = D2->next;
        prev2->next = nullptr;
        return head = D1->next; 
    } 
};