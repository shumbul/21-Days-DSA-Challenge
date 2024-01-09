vector<int> rightView(Node *root)
{
	queue<Node *> q;
	vector<int> ans;
	q.push(root);
	while (!q.empty())
	{
		int prev = -1;
		int sz = q.size();
		for (int i = 0; i < sz; i++)
		{
			Node *temp = q.front();
			q.pop();
			if (temp->left)
			{
				q.push(temp->left);
			}
			if (temp->right)
			{
				q.push(temp->right);
			}
			prev = temp->data;
		}
		ans.push_back(prev);
	}
	return ans;
}