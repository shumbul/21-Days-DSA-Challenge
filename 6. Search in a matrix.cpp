// Link: https://bit.ly/3v0if0m

// Code
class Solution {
public:
    int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
        if(N == 0) return false;
        int i = 0, j = M - 1;
        while(i<N && j>=0){
            if(mat[i][j] == X){
                return 1;
            }
            else if(mat[i][j] > X){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
	}
};

/*
Time complexity: O(n+m)
Space complexity: O(1)
*/


// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Subscribe to my YouTube for video solutions - https://www.youtube.com/@Shumbul
