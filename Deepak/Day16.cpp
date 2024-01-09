vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
	int rs = 0, re = r - 1, cs = 0, ce = c - 1;
	vector<int> ans;
	while (rs <= re && cs <= ce)
	{
		for (int i = cs; i <= ce; i++)
		{
			ans.push_back(matrix[rs][i]);
		}
		rs++;
		for (int i = rs; i <= re; i++)
		{
			ans.push_back(matrix[i][ce]);
		}
		ce--;
		if (rs <= re)
		{
			for (int i = ce; i >= cs; i--)
			{
				ans.push_back(matrix[re][i]);
			}
			re--;
		}
		if (cs <= ce)
		{
			for (int i = re; i >= rs; i--)
			{
				ans.push_back(matrix[i][cs]);
			}
			cs++;
		}
	}
	return ans;
}