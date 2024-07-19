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
        ListNode* temp = head;
        int size=0;
        while(temp){
            size++;
            temp = temp->next;
        }
        temp = head;
        int lim = size/2;
        while(lim--){
            temp = temp->next;
        }
        return temp;
    }
};

// https://leetcode.com/problems/middle-of-the-linked-list/