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
    ListNode* middleNode(ListNode* head) {
        int l = 0;
        ListNode* temp = head;
        while(temp){
            l++;
            temp = temp->next;
        }
        int mid = ceil(l/2);
        ListNode* ans = head;
        for(int i = 0 ; i < mid ; i++){
            ans = ans->next;
        }
        return ans;
    }
};