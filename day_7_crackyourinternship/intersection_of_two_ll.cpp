
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* , bool> mp;
        ListNode* tempA = headA;
        while(tempA!= nullptr){
            mp[tempA] = true;
            tempA = tempA->next;
        }

        ListNode* tempB = headB;
        while(tempB != nullptr){
            if(mp[tempB] == true){
                return tempB;
            }
            tempB = tempB->next;
        }
        return NULL;
    }
};