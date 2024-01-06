// Problem link - https://bit.ly/3RIoaPl


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(auto i:x)
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);
            else {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();
            }
        }
        return st.empty();
    }

};

/*
    Time complexity: O(n)
    Space complexity: O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
