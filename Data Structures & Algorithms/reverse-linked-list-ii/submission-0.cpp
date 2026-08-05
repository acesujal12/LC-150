class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* temp = dummy;
        ListNode* prevNode = dummy;
        int ct=0;

        while(ct != left){
            temp = temp->next;
            ct++;
        }
        ct= 0;
        while(ct != left-1){
            prevNode = prevNode -> next;
            ct++;
        }

        ListNode* prev = NULL;
        ListNode* curr = temp;

        for(int i = left; i< right+1; i++){
            ListNode* nxt = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }

        prevNode -> next = prev;
        temp -> next = curr;

        return dummy->next;   
    }
};