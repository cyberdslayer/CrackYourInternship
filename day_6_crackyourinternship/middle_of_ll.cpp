class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        while(fastPtr!=nullptr && fastPtr->next!=nullptr){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr ->next->next;
        }
        return slowPtr;
    }
};