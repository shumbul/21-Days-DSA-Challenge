class Node
{
public:
	Node *links[26];
	bool isend;

	Node()
	{
		for (int i = 0; i < 26; i++)
		{
			links[i] = NULL;
		}
		isend = false;
	}
};

class Trie
{
	Node *root;

public:
	Trie()
	{
		root = new Node();
	}

	void insert(string word)
	{
		Node *node = root;
		int n = word.size();
		for (int i = 0; i < n; i++)
		{
			if (node->links[word[i] - 'a'] == NULL)
			{
				node->links[word[i] - 'a'] = new Node();
			}
			node = node->links[word[i] - 'a'];
		}
		node->isend = true;
	}

	bool search(string word)
	{
		Node *node = root;
		int n = word.size();
		for (int i = 0; i < n; i++)
		{
			if (node->links[word[i] - 'a'] == NULL)
			{
				return false;
			}
			node = node->links[word[i] - 'a'];
		}
		return node->isend;
	}

	bool startsWith(string word)
	{
		Node *node = root;
		int n = word.size();
		for (int i = 0; i < n; i++)
		{
			if (node->links[word[i] - 'a'] == NULL)
			{
				return false;
			}
			node = node->links[word[i] - 'a'];
		}
		return true;
	}

	Node *endptr(string word)
	{
		Node *node = root;
		int n = word.size();
		for (int i = 0; i < n; i++)
		{
			node = node->links[word[i] - 'a'];
		}
		return node;
	}

	void solve(Node *node, string temp, vector<string> &ans)
	{
		if (node->isend)
		{
			ans.push_back(temp);
		}
		for (int i = 0; i < 26; i++)
		{
			if (node->links[i] != NULL)
			{
				char ch = 'a' + i;
				solve(node->links[i], temp + ch, ans);
			}
		}
	}
};

class Solution
{
public:
	vector<vector<string>> displayContacts(int n, string contact[], string s)
	{
		vector<vector<string>> ans;
		int m = s.size();
		Trie *trie = new Trie();
		for (int i = 0; i < n; i++)
		{
			trie->insert(contact[i]);
		}
		string word = "";
		for (int i = 0; i < m; i++)
		{
			word += s[i];
			if (trie->startsWith(word))
			{
				Node *ptr = trie->endptr(word);
				vector<string> res;
				trie->solve(ptr, word, res);
				ans.push_back(res);
			}
			else
			{
				ans.push_back({"0"});
			}
		}

		return ans;
	}
};

// TC: O(|s|*N*max(|contact[i]|))
// SC: O(N*max(|contact[i]|))