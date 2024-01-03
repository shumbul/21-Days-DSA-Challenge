// Problem link - https://bit.ly/48zi1vM

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
        sort(intervals.begin(), intervals.end());
        int interval=0, n=intervals.size();
        vector<vector<int>> ans;
        while(interval<n){
            int start=intervals[interval][0];
            int end=intervals[interval][1];
            interval++;
            while(interval<n && intervals[interval][0]<=end){
                end=max(end, intervals[interval][1]);
                interval++;
            }
            ans.push_back({start, end});
        }
        return ans;
    }
};

/*
    Time complexity: O(nlogn) - sorting
    Space complexity: O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
