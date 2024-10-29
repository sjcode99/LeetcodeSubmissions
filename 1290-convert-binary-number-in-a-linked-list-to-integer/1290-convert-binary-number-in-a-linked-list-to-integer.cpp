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
    int getResult(vector<int> v){
        int n = v.size();
        int val = 0;
        for(int i=0; i<n; i++){
            val += v[i] * pow(2, n-i-1);
        }
        return val;
    }
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        return getResult(v);
    }
};