// Appraoch - 1
void solve(vector<string> &ans,int n,int open,int close,string &output){
        if(open==0&&close==0){
            ans.push_back(output);
            return;
        }
        if(open>0){
            output.push_back('(');
            solve(ans,n,open-1,close,output);
            output.pop_back();
        }
        if(close>open){
            output.push_back(')');
            solve(ans,n,open,close-1,output);
            output.pop_back();
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int open=n;
        int close=n;
        string output="";
        solve(ans,n,open,close,output);
        return ans;
    }

// Appraoch - 2

void solve(vector<string> &ans,int n,int open,int close,int rem_open,int rem_close,
    string output){
        if(rem_open==0&&rem_close==0){
            ans.push_back(output);
            return;
        }
        if(rem_open>0){
            output.push_back('(');
            solve(ans,n,open+1,close,rem_open-1,rem_close,output);
            output.pop_back();
        }
        if(open>close){
            output.push_back(')');
            solve(ans,n,open,close+1,rem_open,rem_close-1,output);
            output.pop_back();
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int open=0;
        int close=0;
        int rem_open=n;
        int rem_close=n;
        string output="";
        solve(ans,n,open,close,rem_open,rem_close,output);
        return ans;
    }


// Appraoch - 3

void solve(vector<string> &ans,int n,int open,int close,int rem_open,int rem_close,
    string output){
        if(rem_open==0&&rem_close==0){
            ans.push_back(output);
            return;
        }
        if(rem_open>0){
            // output.push_back('(');
            solve(ans,n,open+1,close,rem_open-1,rem_close,output+'(');
            // output.pop_back();
        }
        if(open>close){
            // output.push_back(')');
            solve(ans,n,open,close+1,rem_open,rem_close-1,output+')');
            // output.pop_back();
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int open=0;
        int close=0;
        int rem_open=n;
        int rem_close=n;
        string output="";
        solve(ans,n,open,close,rem_open,rem_close,output);
        return ans;
    }
