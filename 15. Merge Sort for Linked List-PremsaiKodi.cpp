Node* findMid(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* Merge(Node* left,Node* right){
        if(left == NULL ) return right;
        if(right == NULL ) return left;
        
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        while(left!=NULL && right!=NULL){
            if(left->data < right->data){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        
        while(left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;          
        }
        return ans->next;
    }
    
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* mid = findMid(head);
        Node *left=head;
        Node *right=mid->next;
        mid->next=NULL;
        
        left = mergeSort(left);
        right = mergeSort(right);
        
        head = Merge(left,right);
        return head;
    }

Time Complexity : O(nlogn)
Space Complexity : O(logn)
