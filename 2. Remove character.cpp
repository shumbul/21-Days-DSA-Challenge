// https://bit.ly/3Tsqahn

class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        // set to store distinct chars in string2
        unordered_set<char> s2(string2.begin(), string2.end());

        int curr=0;
        for(int i=0;i<string1.size();i++){
            if(s2.find(string1[i])!=s2.end())
                continue;
            string1[curr++]=string1[i]; // overwriting
        }
        string1.erase(string1.begin()+curr, string1.end());
        return string1;
    }
};

/*
Time complexity: O(|S1|)
Space complexity: O(|S2|)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
