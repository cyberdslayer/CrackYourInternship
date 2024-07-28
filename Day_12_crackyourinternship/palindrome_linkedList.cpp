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
    bool isPalindrome(ListNode* head) {
        // arr of linkedList
        
        vector<int> listVals;
        while(head){
            listVals.push_back(head->val);
            head = head->next;
        }
        int leftPtr =0;
        int rightPtr = listVals.size()-1;
        while(leftPtr < rightPtr && listVals[leftPtr] == listVals[rightPtr]){
            leftPtr++; rightPtr--;
        }
        return leftPtr>= rightPtr;
    }
};