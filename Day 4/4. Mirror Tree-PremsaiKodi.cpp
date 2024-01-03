    void mirror(Node* node) {
        // code here
        if(!node){
            return;
        }
        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);
    }

Time Complexity : O(n)
Space Complexity : O(n)
