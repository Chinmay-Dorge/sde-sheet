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
    int getDecimalValue(ListNode* head) {
        int count = 1 , ans = 0;
        vector<int> n;
        ListNode* temp = head;
        while(temp){
            n.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = n.size()-1 ; i >= 0 ; i--){
            ans += count*n[i];
            count *= 2;
        }
        return ans;
    }
};