// Problem link - https://bit.ly/3TMU9ka 

// Approach - 1
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr, arr+N);
      int ans=1, longest=1, last=arr[0];
      for(int i=1;i<N;i++){
          if(arr[i]==last)
            continue;
          if(arr[i]==last+1){
              longest++;
              last++;
          }
          else ans=max(ans, longest), longest=1, last=arr[i];
      }
      ans=max(ans, longest);
      return ans;
    }
};

/*
    Time complexity: O(nlogn)
    Space complexity: O(1)
*/

// Approach - 2: Using a set
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int>s(arr,arr+N);
      int ans=0;
      for(auto x:s){
          // if x-1 is not there, start from the smallest number in the series 
          // and check for consecutive numbers using set
          if(s.count(x-1)==0){
              int count=1;
              while(s.count(x+count)!=0)count++;
              ans=max(ans,count);
          }
      }
      return ans;
    }
};

/*
    Time complexity: O(nlogn)
    Space complexity: O(1)
*/

class DSU {
    vector<int> par, rank;
public:
    DSU(int n){
        par.resize(n);        
        rank.resize(n);
        for(int i=0;i<n;i++)
            par[i]=i, rank[i]=1;
    }
    int find(int a){
        if(a==par[a])
            return a;
        return par[a]=find(par[a]);
    }
    void union_(int a, int b){
        a=find(a), b=find(b);
        if(a==b)
            return;
        if(rank[b]>=rank[a]){
            // b dominates
            rank[b]+=rank[a];
            par[a]=b;
        }
        else{
            rank[a]+=rank[b];
            par[b]=a;
        }
    }
    int res(int n){
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans, rank[i]);
        }
        return ans;
    }
};

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        int n=N;
        // we union the indices
        DSU dsu(n);
        
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            // to find consecutive elements faster
            if(mp.find(arr[i])==mp.end())
                mp[arr[i]]=i;
        }
        
        unordered_set<int> vis;
        for(int i=0;i<n;i++){
            if(vis.find(arr[i])!=vis.end()){
                continue;
            }
            if(mp.find(arr[i]-1)!=mp.end()){
                dsu.union_(mp[arr[i]-1], i);
            }
            if(mp.find(arr[i]+1)!=mp.end()){
                dsu.union_(mp[arr[i]+1], i);
            }
            vis.insert(arr[i]);
        }
        
        return dsu.res(n);
    }
};


/*
Time Complexity: O(n)
Space Complexity: O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
