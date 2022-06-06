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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
                if(!headA || !headB){
            return NULL;
        }
        if(headA == headB){
            return headA;
        }
        ListNode *tempa = headA , *tempb = headB;
        map<ListNode*,bool> m;
        while(tempa){
            m[tempa] = true;
            tempa = tempa->next;
        }
        while(tempb){
            if(m[tempb]){
                return tempb;
            }
            tempb = tempb->next;
        }
        return NULL;
    }
};