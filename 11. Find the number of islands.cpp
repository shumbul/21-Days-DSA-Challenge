// Problem link: https://bit.ly/48zyVdS

class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size(), m=grid[0].size();
        int ans=0;
        queue<pair<int, int>> q;
        vector<vector<bool>> vis(n, vector<bool> (m, false));
        
        vector<int> dx={0, 0, 1, 1, 1, -1, -1, -1}
        vector<int> dy={1, -1, 0, 1, -1, 0, 1, -1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    q.push({i, j});
                    vis[i][j]=1;
                    while(q.size()) {
                        auto front=q.front();
                        q.pop();
                        int x=front.first, y=front.second;
                        for(int k=0;k<8;k++){
                            int nx=x+dx[k], ny=y+dy[k];
                            if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]=='1' && !vis[nx][ny])
                                q.push({nx, ny}), vis[nx][ny]=1;
                        }
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
};

/*
    Time complexity: O(n*m)
    Space complexity: O(n*m)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
