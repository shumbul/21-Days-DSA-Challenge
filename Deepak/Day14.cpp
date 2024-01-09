struct Node *reverseList(struct Node *head)
{
	if (!head || !head->next)
	{
		return head;
	}
	struct Node *prev = NULL;
	struct Node *curr = head;
	while (curr)
	{
		struct Node *ne = curr->next;
		curr->next = prev;
		prev = curr;
		curr = ne;
	}
	return prev;
}