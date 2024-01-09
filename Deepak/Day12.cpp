int wordLadderLength(string bW, string eW, vector<string> &wList)
{
	unordered_set<string> s(wList.begin(), wList.end());
	queue<pair<string, int>> q;
	q.push({bW, 1});
	while (!q.empty())
	{
		auto w = q.front().first;
		auto steps = q.front().second;
		q.pop();
		if (w == eW)
		{
			return steps;
		}
		for (int i = 0; i < w.size(); i++)
		{
			char x = w[i];
			for (char c = 'a'; c <= 'z'; c++)
			{
				w[i] = c;
				if (s.find(w) != s.end())
				{
					s.erase(w);
					q.push({w, steps + 1});
				}
			}
			w[i] = x;
		}
	}
	return 0;
}