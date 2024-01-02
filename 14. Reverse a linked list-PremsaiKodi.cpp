  Node* reverse(Node* &prev,Node* &curr){
        if(curr==NULL){
            return prev;
        }
        Node* forward=curr->next;
        curr->next=prev;
        reverse(curr,forward);
    }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* prev=NULL;
        Node* curr=head;
        return reverse(prev,curr);
    }

Time Complexity : O(n)
Space Complexity : O(n)
