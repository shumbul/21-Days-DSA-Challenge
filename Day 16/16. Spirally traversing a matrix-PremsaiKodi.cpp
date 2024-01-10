vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int k = 0, m = r;
        int l = 0, n = c;
        int i;
        vector<int> ans;
        
        while(k < m && l < n){
            
            for(i = l; i < n; i++){
                ans.push_back(matrix[k][i]);
            }
            k++;
            
            for(i = k; i < m; i++){
                ans.push_back(matrix[i][n - 1]);
            }
            n--;
            
            if(k < m){
                for(i = n - 1; i >= l; i--){
                    ans.push_back(matrix[m - 1][i]);
                }
                m--;
            }
            
            if(l < n){
                for(i = m - 1; i >= k; i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }

Time Complexity : O(r*c)
Space Complexity : O(r*c)
