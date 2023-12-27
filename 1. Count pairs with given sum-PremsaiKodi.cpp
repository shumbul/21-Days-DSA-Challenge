    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        // ---->>>>Brute_force_solution<<<<----------
        
            // T.C: - O(n*n)
            // S.C: - O(1)
        
    //     int count = 0;
    //     for(int i = 0; i < n; i++)
    //     {
    //         for(int j = i+1; j < n; j++)
    //         {
    //             if((arr[i] + arr[j]) == k)
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // int number_of_pairs = count;
    // return number_of_pairs;
    
    
    
    
        // ----->>>>>>>Best Approach<<<<---------
        
        
            // T.C: - O(n)
            // S.C: - O(n)
    
    // Creating an unordered_map for keep tracking the elements with 
    //  their frequency
    unordered_map<int, int> elem;
    
    // For counting the pairs
    int count = 0;
    
    // let's go for examine each and every element
    for(int i = 0; i < n; i++)
    {
        // Check which element is required for making pair with the current elem
        int required_elem = k-arr[i];
        
        // Now, check, is the required_elem already apeared in the array
        if(elem.find(required_elem) != elem.end())
        {
            //if yes
            // then add its frequency in the count
            count += elem[required_elem];
            
            // store the current element in the map with its frequency
            elem[arr[i]]++;
        }
        else
        {
            // if No
            // then store the current element in the map with its frequency
            // because it might be happen 
            // that the element it is looking for pair with
            //  present ahead in array
            elem[arr[i]]++;
        }
    }
    
    
    int number_of_pairs = count;
    
    return number_of_pairs;
    
// Author: Akash Yadav
// LinkedIn Id: www.linkedin.com/in/akash-yadav-ak

    }