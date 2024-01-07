int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int>s(arr,arr+N);
      int ans=0;
      for(auto x:s){
          if(s.count(x-1)==0){
              int ct=1;
              while(s.count(x+ct)!=0)ct++;
              ans=max(ans,ct);
          }
      }
      return ans;
    }

Time Complexity : O(n)
Space Complexity : O(n)
