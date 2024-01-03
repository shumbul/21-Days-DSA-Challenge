int nthFibonacci(int n){
        // code here
        if(n==0||n==1){
            return n;
        }
        int a=0,b=1,c;
        for(int i=2;i<=n;i++){
            c=(a%1000000007+b%1000000007)%(1000000007);
            a=b;
            b=c;
        }
        return b;
    }

Time Complexity : O(N)
Space Complexity : O(1)
