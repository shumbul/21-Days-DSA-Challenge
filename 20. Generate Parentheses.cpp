//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    vector<string> ans;
    void dfs(string s, int countOpen, int n) {
        if(s.length()==2*n){
            ans.push_back(s);
            return;
        }
        if(countOpen<n)
            dfs(s+'(', countOpen+1, n);
        if(s.length()-countOpen<countOpen)
            dfs(s+')', countOpen, n);
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        ans.clear();
        dfs("",0, n);
        return ans;
    }
};
