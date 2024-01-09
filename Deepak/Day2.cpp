string removeChars(string string1, string string2)
{
	vector<bool> freq(26, 0);
	for (auto i : string2)
	{
		freq[i - 'a'] = 1;
	}
	string ans = "";
	for (auto i : string1)
	{
		if (!freq[i - 'a'])
		{
			ans += i;
		}
	}
	return ans;
}