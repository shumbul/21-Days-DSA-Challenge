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