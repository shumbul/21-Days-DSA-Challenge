// Approach - 1

bool ispar(string x)
    {
        // Your code here
        stack<char> temp;
        for(int i=0;i<x.length();i++){
            if(temp.empty())
                temp.push(x[i]);
            else if((temp.top()=='('&&x[i]==')')||(temp.top()=='['&&x[i]==']')||(temp.top()=='{'&&x[i]=='}'))
                    temp.pop();
            else
                    temp.push(x[i]);
        }
        if(temp.empty()){
            return true;
        }
        return false;
    }


Time Complexity : O(n)
Space Complexity : O(n)


// Approach -2 

bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0;i<x.length();i++){
            char ch=x[i];
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char topch=st.top();
                    if(ch==')'&&topch=='('){
                        st.pop();
                    }
                    else if(ch=='}'&&topch=='{'){
                        st.pop();
                    }
                    else if(ch==']'&&topch=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
            if(st.empty()){
                return true;
            }
            else{
                return false;
            }
    }


Time Complexity : O(n)
Space Complexity : O(n)
