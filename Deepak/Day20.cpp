void solve(int idx, int mx, int ocnt, int ccnt, char ch, string str, vector<string> &ans)
{
	if (idx == mx)
	{
		ans.push_back(str);
		return;
	}
	str += ch;
	if (ch == '(')
	{
		ocnt++;
	}
	else
	{
		ccnt++;
	}
	if (ocnt >= ccnt)
	{
		if (ocnt < (mx / 2))
		{
			solve(idx + 1, mx, ocnt, ccnt, '(', str, ans);
		}
		solve(idx + 1, mx, ocnt, ccnt, ')', str, ans);
	}
}
vector<string> AllParenthesis(int n)
{
	vector<string> ans;
	solve(0, 2 * n, 0, 0, '(', "", ans);
	return ans;
}