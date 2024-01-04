// Problem Link: http://bit.ly/41BAKo6 

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // Three solutions
        
        // First Sol: -
        
        // T.C: - O(nlogn) + O(K)
        // s.C: - O(K)
        
        sort(arr, arr+n);
        
        vector<int> kLarge;
        
        kLarge.reserve(k);
        
        for(int i = n-1; i >= n-k; i--)
        {
            kLarge.push_back(arr[i]);
        }
        
    return kLarge;
    
// ----------------------------------------------------------------------
    
        
        // Second Sol: - Best Time Complexity
        
        // T.C: - O(nlogk) + O(K) + O(k)
        // S.C: - O(2K)
    
    
        // min heap (storing smallest to largest)
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i < n; i++)
        {
            pq.push(arr[i]);    // O(logk) time complexity as it is guarenteed that pq will not store more than k elements
            
            
            // Jese hi pq me 'k' se jyada elem store hue
            // humne un elem me se 'sabse chota elem' 
            // nikal diya
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        
        vector<int> klargest;
        
        klargest.reserve(k);
        
        while(!pq.empty())
        {
            klargest.push_back(pq.top());
            pq.pop();
        }
        
        reverse(klargest.begin(), klargest.end());
        
        
    return klargest;
        
// ----------------------------------------------------------------------

        
        // Third sol: -
        
        // T.C: - O(nlogn) + O(k)
        // S.C: - O(n) + O(k)
        
        
        // max heap (storing largest to smallest)
        priority_queue<int> pq;
        
        for(int i = 0; i < n; i++)
        {
            pq.push(arr[i]);    // O(logn)
        }
        
        vector<int> klargest;
        klargest.reserve(k);
        
        for(int i = 0; i < k; i++)
        {
            klargest.push_back(pq.top());
            pq.pop();
        }
        
        
        return klargest;
    

// Author: Akash Yadav
// GitHub Id: https://github.com/AkashYadavak 
// LinkedIn Id: www.linkedin.com/in/akash-yadav-ak
// Thank you very much, Shumbul di
    
    }
};
