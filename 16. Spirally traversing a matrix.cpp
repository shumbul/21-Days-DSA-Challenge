// Problem Link - https://bit.ly/48k0Iz1 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int n=matrix.size(), m=matrix[0].size();
        int left=0, right=m-1, up=0, down=n-1;
        vector<int> ans;
        while(1){
            // right
            int i=left;
            while(i<=right) ans.push_back(matrix[up][i++]);
            up++;
            if(up>down) break;

            i=up;
            while(i<=down) ans.push_back(matrix[i++][right]);
            right--;
            if(left>right) break;

            i=right;
            while(i>=left) ans.push_back(matrix[down][i--]);
            down--;
            if(up>down) break;

            i=down;
            while(i>=up) ans.push_back(matrix[i--][left]);
            left++;
            if(left>right) break;
        }
        return ans;
    }
};

/*
Time Complexity: O(n*m)
Space Complexity: O(n+m)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Video solutions available on my YouTube - https://yt.openinapp.co/shumbul 
// Follow 21 days DSA Challenge - https://shumbularifa.com/challenge
