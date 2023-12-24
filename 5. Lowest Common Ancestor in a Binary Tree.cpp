// https://bit.ly/48r1hXl

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Base case
       if(root==NULL || n1==root->data || n2==root->data) return root;
       
       auto left = lca(root->left, n1, n2);
       auto right = lca(root->right, n1, n2);
       if(left==NULL) return right;
       if(right==NULL) return left;
       
       // both left and right are not null
       // means one value is present in left and another in right
       // root is the lca
       return root;
    }
    
    /*
        Time Complexity: O(n)
        Space Complexity: O(n)
    */
};

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// video solution - https://youtube.com/shorts/Rzz4Qel0sSg 
