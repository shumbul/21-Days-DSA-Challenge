// Problem link: https://bit.ly/41BjJKW

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
        vector<int> ans;
        if(!root)
            return ans;
        // LEVEL ORDER
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* node=q.front();
                q.pop();
                if(i==0) ans.push_back(node->data);
                if(node->right) q.push(node->right);
                if(node->left) q.push(node->left);
            }
        }
        return ans;
    }
};

/*
    Time complexity: O(n)
    Space complexity: O(h), h=height of tree
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
