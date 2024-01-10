Node *lca(Node *root, int n1, int n2)
{
	if (!root)
	{
		return NULL;
	}
	if (root->data == n1 || root->data == n2)
	{
		return root;
	}
	Node *l = lca(root->left, n1, n2);
	Node *r = lca(root->right, n1, n2);
	if (l && r)
	{
		return root;
	}
	if (l)
	{
		return l;
	}
	if (r)
	{
		return r;
	}
	return NULL;
}

// TC: O(N) N:- Number of nodes
// SC: O(Height of the tree) If we consider Recursive Stack