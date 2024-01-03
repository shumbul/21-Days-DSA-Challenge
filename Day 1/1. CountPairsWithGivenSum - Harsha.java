class Solution {

   

   

  int getPairsCount(int[] arr, int n, int k) {

    // code here

    Map<Integer, Integer> map = new HashMap<>();

    int count = 0;

    for (int i : arr) {

      if (map.containsKey(k - i)) {

        count += map.get(k - i);

      }

       

      if (map.containsKey(i)) {

        map.put(i, map.get(i) + 1);

      } else {

        map.put(i, 1);

      }

    }

    return count;

  }

}



/**
 * Time complexity : O(n) - for iterating array of n elements
 * Space complexity: O(n) - For storing n elements of array (in worst case where all elements of the array are unique)
*/
