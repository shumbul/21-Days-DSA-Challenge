void dfs(vector<vector<char>> &grid, int n, int m, int i, int j, vector<vector<bool>> &vis)
{
	if (i >= m || i < 0)
	{
		return;
	}
	if (j >= n || j < 0)
	{
		return;
	}
	if (grid[i][j] == '0')
	{
		return;
	}
	if (vis[i][j])
	{
		return;
	}
	vector<pair<int, int>> p = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}, {1, -1}, {1, 1}, {-1, -1}, {-1, 1}};
	vis[i][j] = 1;
	for (auto k : p)
	{
		dfs(grid, n, m, i + k.first, j + k.second, vis);
	}
}
int numIslands(vector<vector<char>> &grid)
{
	int m = grid.size();
	int n = grid[0].size();
	vector<vector<bool>> vis(m, vector<bool>(n, 0));
	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grid[i][j] == '1' && !vis[i][j])
			{
				dfs(grid, n, m, i, j, vis);
				ans++;
			}
		}
	}
	return ans;
}

// TC: O(N*M)
// SC: O(N*M)