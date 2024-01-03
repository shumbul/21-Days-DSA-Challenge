int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
        for(int i=n-1;i;i--){
            for(int j=0;j<i;j++){
                triangle[i-1][j]+=min(triangle[i][j],triangle[i][j+1]);
            }
        }
        return triangle[0][0];
    }

Time Complexity : O(n^2)
Space Complexity : O(1)
