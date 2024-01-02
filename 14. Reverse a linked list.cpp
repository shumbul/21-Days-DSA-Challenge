// Problem link - https://bit.ly/48AEVD8

class Solution
{
    Node* prev=NULL,* curr=NULL;
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL)   return curr;
        curr=head;
        head=head->next;
        curr->next=prev;
        prev=curr;
        head=reverseList(head);
        return head;
    }
    
};

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Video solutions available on my YouTube - https://yt.openinapp.co/shumbul 
// Follow 21 days DSA Challenge - https://shumbularifa.com/challenge
