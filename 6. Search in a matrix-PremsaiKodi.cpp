Approach-1 (Brute Force)
int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int flag=0;
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(mat[i][j]==X){
	                flag=1;
	            }
	        }
	    }
	    return flag;
	}

TIme Complexity : O(n^2)
Space Complexity : O(1)

Approach-2 (Binary Search)
int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int i=N-1,j=0;
        while(i>=0 && j<M)
        {
            if(mat[i][j]==X)
                return 1;
            else if(mat[i][j]>X)
                i--;
            else 
                j++;
        }
        return 0;
	}

TIme Complexity : O(log(n))
Space Complexity : O(1)
