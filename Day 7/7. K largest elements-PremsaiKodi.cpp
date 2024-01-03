vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> res;
        sort(arr,arr+n);
        for(int i=n-1;i>=n-k;i--){
            res.push_back(arr[i]);
        }
        return res;
    }

Time Complexity : O(nlogn)
Space Complexity : O(k)
