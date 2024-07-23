

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head->next == nullptr) return head;
        head->next = compute(head->next);
        if(head->data < head->next->data) return head->next;
        return head;
    }
    
};