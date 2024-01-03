class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	   // Well Know method, 
	   //start from either top-right corner or bottom-left corner
	   // and end at either bottom-left corner or top-right corner repectively.
	   
	   // Requirments: row sorted from left to right
      //              + col sorted from top to bottom   
	   
	   
	   
	   // T.C: - O(N+M)
	   // S.C: - O(1)
	    
	    int row = 0;
	    int col = M-1;
	    while(row < N && col < M)
	    {
	        int ans = mat[row][col];
	        if(ans == X)
	        {
	            return true;
	        }
	        else if(ans < X)
	        {
	            row++;
	        }
	        else{
	            col--;
	        }
	    }
	    
	   return false; 
	   
	}

    // Author: Akash Yadav
    // Github:https://github.com/AkashYadavak 
    // LinkedIn Id: www.linkedin.com/in/akash-yadav-ak
    // Thank you very much, Shumbul di

};