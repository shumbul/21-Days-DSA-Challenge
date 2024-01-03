void solve(Node* root,vector<int> &ans,int level){
        if(root==NULL){
            return;
        }
        
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        
        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);
        return;
    }
    
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       int level=0;
       solve(root,ans,level);
       return ans;
    }

Time Complexity : O(N)
Space Complexity : O(N)
