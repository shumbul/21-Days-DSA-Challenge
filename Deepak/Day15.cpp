void merge(vector<int> &temp, int st, int m, int en)
{
	vector<int> left(m - st + 1);
	vector<int> right(en - m);
	for (int i = 0; i < m - st + 1; i++)
	{
		left[i] = temp[st + i];
	}
	for (int i = 0; i < en - m; i++)
	{
		right[i] = temp[m + 1 + i];
	}
	int i = 0;
	int j = 0;
	int idx = st;
	while (i < m - st + 1 && j < en - m)
	{
		if (left[i] <= right[j])
		{
			temp[idx] = left[i];
			idx++;
			i++;
		}
		else
		{
			temp[idx] = right[j];
			idx++;
			j++;
		}
	}
	while (i < m - st + 1)
	{
		temp[idx] = left[i];
		idx++;
		i++;
	}
	while (j < en - m)
	{
		temp[idx] = right[j];
		idx++;
		j++;
	}
}
void mergesort(vector<int> &temp, int st, int en)
{
	if (st >= en)
	{
		return;
	}
	int m = st + (en - st) / 2;
	mergesort(temp, st, m);
	mergesort(temp, m + 1, en);
	merge(temp, st, m, en);
}
Node *mergeSort(Node *head)
{
	vector<int> temp;
	Node *n = head;
	while (n)
	{
		temp.push_back(n->data);
		n = n->next;
	}
	mergesort(temp, 0, temp.size() - 1);
	Node *ans = new Node(-1);
	Node *t = ans;
	for (int i = 0; i < temp.size(); i++)
	{
		ans->next = new Node(temp[i]);
		ans = ans->next;
	}
	ans = t->next;
	delete (t);
	return ans;
}