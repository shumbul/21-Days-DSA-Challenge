vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
         sort(arr.begin(),arr.end());
         int i=1;
         while(i<arr.size()){
             if(arr[i][0]<=arr[i-1][1]){
                 arr[i-1][1]=max(arr[i-1][1],arr[i][1]);
                 arr.erase(arr.begin()+i);
             }
             else{
                 i++;
             }
         }
         return arr;
    }
