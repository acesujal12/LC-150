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
    bool hasCycle(ListNode* head) {
        ListNode* oneStep = head;
        ListNode* twoSteps = head;

        while(twoSteps !=NULL && twoSteps -> next!= NULL){
            oneStep = oneStep -> next;
            twoSteps = twoSteps ->next->next;
            if(oneStep == twoSteps){
                return true;
            }
        }
        return false;
    }
};
