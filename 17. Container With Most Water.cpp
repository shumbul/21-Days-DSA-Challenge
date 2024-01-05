// Problem link - https://bit.ly/3H6DjoS 

//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long i=0, j=len-1, ans=0;
    while(i<j){
        ans=max(ans, min(A[i], A[j])*(j-i));
        if(A[i]<A[j])
            i++;
        else j--;
    }
    return ans;
}

/*
    Time complexity: O(n)
    Space complexity: O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
