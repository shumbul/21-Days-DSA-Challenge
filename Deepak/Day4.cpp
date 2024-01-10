void mirror(Node *node)
{
	if (!node)
	{
		return;
	}
	swap(node->left, node->right);
	mirror(node->left);
	mirror(node->right);
}

// TC: O(N) N:- Number of Nodes
// SC: O(Height of the Tree) If we consider Recursive Stack