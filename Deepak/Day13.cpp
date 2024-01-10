vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> ans;
	for (int i = 0; i < intervals.size(); i++)
	{
		if (ans.empty())
		{
			ans.push_back(intervals[i]);
		}
		else
		{
			if (ans[ans.size() - 1][1] >= intervals[i][0])
			{
				ans[ans.size() - 1][1] = max(ans[ans.size() - 1][1], intervals[i][1]);
			}
			else
			{
				ans.push_back(intervals[i]);
			}
		}
	}
	return ans;
}

// TC: O(NLogN)
// SC: O(N)