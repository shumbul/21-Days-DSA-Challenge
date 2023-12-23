// Problem - https://bit.ly/4aqvKa0
// Video solution on my YouTube - https://yt.openinapp.co/shumbul

class Solution {
    public:
      // Function to convert a binary tree into its mirror tree.
      void mirror(Node* node) {
          // code here
          if(!node)
              return;
          swap(node->left, node->right);
          mirror(node->left);
          mirror(node->right);
      }
};

/*
    Time complexity: O(n), n=number of nodes
    Space complexity: O(h), h=height of tree
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
