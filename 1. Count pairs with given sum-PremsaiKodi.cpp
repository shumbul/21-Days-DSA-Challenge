int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            int res=k-arr[i];
            if(mp.find(res)!=mp.end()){
                count+=mp[res];
            }
            mp[arr[i]]++;
        }
        return count;
    }

Time Complexity : O(n)
Space Complexity : O(n)
