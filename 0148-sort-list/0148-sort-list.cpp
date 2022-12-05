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
    ListNode* sortList(ListNode* head) {
        
        if(head == nullptr) return head;
        
        vector<int> vec;
        ListNode* node = head;
        while(node != nullptr){
            vec.push_back(node->val);
            node = node->next;
        }
        
        sort(vec.begin(), vec.end());
        
        ListNode* temp = new ListNode(vec[0]);
        ListNode* curr = temp;
        
        for(int i=1; i<vec.size(); i++){
            ListNode* it = new ListNode(vec[i]);
            curr->next = it;
            curr = curr->next;
        }
        return temp;
    }
};