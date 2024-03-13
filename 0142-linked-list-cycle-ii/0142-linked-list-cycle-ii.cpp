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
    ListNode *detectCycle(ListNode *head) {
        ListNode* one = head;
        ListNode* two = head;
        
        while(two != nullptr && two->next != nullptr){
            one = one->next;
            two = two->next->next;
            
            if(one == two){
                ListNode* one = head;
                
                while(one != two){
                    one = one->next;
                    two = two->next;
                }
                return one;
            }
        }
        return nullptr;
    }
};