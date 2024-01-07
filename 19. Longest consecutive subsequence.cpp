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

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
