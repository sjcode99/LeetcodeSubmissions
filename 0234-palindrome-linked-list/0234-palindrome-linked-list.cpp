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
private:
    ListNode* reverse(ListNode* hd){
        ListNode* prev = NULL;
        ListNode* curr = hd;
        
        while(curr){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        
        ListNode* sl = head;
        ListNode* fs = head;
        
        while(fs->next && fs->next->next){
            sl = sl->next;
            fs = fs->next->next;
        }
        
        sl = reverse(sl->next);
        fs = head;
        ListNode* tmp = sl;
        
        while(tmp){
            if(tmp->val != fs->val) return false;
            tmp = tmp->next;
            fs = fs->next;
        }
        return true;
    }
};