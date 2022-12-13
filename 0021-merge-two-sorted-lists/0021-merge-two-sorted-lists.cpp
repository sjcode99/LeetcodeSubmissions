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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        
        if(l1->val > l2->val) swap(l1, l2);
        ListNode* res = l1;
        
        while(l1 != nullptr && l2 != nullptr){
            ListNode* curr = nullptr;
            while(l1 != nullptr && l1->val <= l2->val){
                curr = l1;
                l1 = l1->next;
            }
            curr->next = l2;
            swap(l1,l2);
        }
        return res;
    }
};