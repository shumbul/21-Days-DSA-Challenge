// problem link - https://bit.ly/3tG5GXU 

class Solution{
    Node* mergeList(Node* l1, Node* l2) {
        Node* node = new Node(0);
        Node* curr = node;

        while(l1 && l2) {
            if(l1->data<=l2->data){
                curr->next=l1;
                l1=l1->next;
            }
            else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }

        curr->next = (l1 != NULL) ? l1 : l2;
        return node->next;
    }
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(!head || !head->next) return head;
        auto slow=head, fast=head, temp=head;

        while(fast && fast->next) {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        // temp is just before mid, slow is the mid element
        // 1. divide
        temp->next=NULL;
        auto l1=mergeSort(head);
        auto l2=mergeSort(slow);
        // 2. Conquer
        return mergeList(l1, l2);
    }
};

/*
    Time complexity: O(nlogn)
    Space complexity: O(n) - mergeList function
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
