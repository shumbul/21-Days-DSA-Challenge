bool ispar(string s)
{
	stack<char> st;
	bool flag = 1;
	int i = 0;
	int n = s.length();
	while (i < n)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			st.push(s[i]);
		}
		else
		{
			if (s[i] == ')')
			{
				if (!st.empty())
				{
					if (st.top() != '(')
					{
						flag = 0;
						break;
					}
					else
					{
						st.pop();
					}
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if (s[i] == '}')
			{
				if (!st.empty())
				{
					if (st.top() != '{')
					{
						flag = 0;
						break;
					}
					else
					{
						st.pop();
					}
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if (s[i] == ']')
			{
				if (!st.empty())
				{
					if (st.top() != '[')
					{
						flag = 0;
						break;
					}
					else
					{
						st.pop();
					}
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
		i++;
	}
	if (st.empty())
	{
		return flag;
	}
	return false;
}