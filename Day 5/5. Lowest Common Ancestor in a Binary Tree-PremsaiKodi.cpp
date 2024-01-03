Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
        if(root == NULL)
            return NULL;

        //check for p and q;
        if(root->data == n1)
            return root;
        if(root->data == n2)
            return root;
        
        Node* leftAns = lca(root->left,n1,n2);
        Node* rightAns = lca(root->right,n1,n2);

        if(leftAns == NULL && rightAns == NULL)
            return NULL;
        else if(leftAns != NULL && rightAns == NULL)
            return leftAns;
        else if(leftAns == NULL && rightAns != NULL)
            return rightAns;
        else{
            return root;
        }
    }

TIme Complexity : O(n)
Space Complexity : O(n)
