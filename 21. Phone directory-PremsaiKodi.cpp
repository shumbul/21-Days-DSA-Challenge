vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        vector<int> flag(n,1);
        for(int i=0;i<s.size();i++){
            char character=s[i];
            set<string> set1;
            for(int j=0;j<n;j++){
                if(contact[j].size()>i && contact[j][i]==character && flag[j]){
                    set1.insert(contact[j]);
                }
                else{
                    flag[j]=0;
                }
            }
            if(set1.empty()){
                ans.push_back({"0"});
            }
            else{
                vector<string> temp(set1.begin(),set1.end());
                ans.push_back(temp);
            }
        }
        return ans;
    }

Time Complexity : O(n*m)  
Space Complexity : O(n*m)
// 'm' is the length of string s
