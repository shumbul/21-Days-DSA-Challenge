long long maxArea(long long A[], int len)
{
        // Your code goes here
        int l=0,r=len-1;
        long long rst=0;
        while(l<=r){
            rst=max(rst, min(A[l],A[r])*(r-l));
            if(A[l]<A[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return rst;
}

Time Complexity : O(n)
Space Complexity : O(1)
