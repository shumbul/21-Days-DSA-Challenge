// Problem link - https://bit.ly/48AEVD8

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head -> next == NULL)
            return head;
            
        Node* prev = NULL;
        Node* curr = head;
        Node* next;
            
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        
        head = prev;
        
        return head;
    }
    
    /* 
    Time Complexity: O(n)
    Space Complexity: O(1) 
    */
    
};

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Video solutions available on my YouTube - https://yt.openinapp.co/shumbul 
// Follow 21 days DSA Challenge - https://shumbularifa.com/challenge
